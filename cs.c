#include <ncurses.h>
#include <signal.h>
#include <unistd.h>
#include <locale.h>
#include <math.h>

//draw.h contains all the coolSs and their drawing functions
#include "draw.h"
#define TIME_BETWEEN_FRAMES (5000)

//I want an easing function. Something like 1-e^(-x)
int easing_function(int x, int min, int max){
  return (max+min) - (max+min) * exp(float(-(x-min)) /(40.0) ); 
}

int main(int argc, char * argv[]){

  //Locale "should" be set, according to ncurses man page
  setlocale(LC_ALL,"");

  //initialize screen, remove cursor
  WINDOW * w = initscr();
  curs_set(0);

  //Get window maximum values
  //getmaxyx is a macro
  int max_y, max_x;
  getmaxyx(w, max_y, max_x);


  printf("size: max_y: %d\t max_x: %d\n", max_y, max_x);
  usleep(1000000);

  //"generic" variables to easily change which cool s to draw
  int cs_width  = CS_WIDTH;
  int cs_height = CS_HEIGHT;
  void (*draw_function)(WINDOW *, int, int) = &draw_cool_s;

  //frame loop
  //increment through x values
  for(int x_vals = 0; x_vals < (max_x - (max_x *0.00)); x_vals++) {
    clear();
    
    int eased = easing_function(x_vals, 0, max_x);
    
    //reverse through x values to draw coolS columns 
    //makes it look like the CoolSs are gliding along
    //also use an even counter, so the columns can be offset
    for(int rev = eased, even=0; rev >= 0; rev -= cs_width,  even++){

      //draw cool s column, loop through y values
      for(int y_vals = 0; y_vals < max_y; y_vals += cs_height){
        int offset = -(cs_width * (even%2)); //can't use cs_height becuase otherwise there is no offset
        draw_function(w, y_vals+offset, rev); //pass in window, y position, x position
      }
    }

    usleep(TIME_BETWEEN_FRAMES);
    getmaxyx(w, max_y, max_x);
    refresh();
  }
  usleep(1000000);

  //cleanup
  delwin(w);
  endwin();
  refresh();
  return 0;

}
