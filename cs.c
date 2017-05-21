#include <ncurses.h>
#include <signal.h>
#include <unistd.h>
#include <locale.h>

#define CS0 "    .     " 
#define CS1 "   / \\   " 
#define CS2 "  /   \\  "  
#define CS3 "  | | |   "
#define CS4 "   \\ \\' "  
#define CS5 "   ,\\ \\ "  
#define CS6 "  | | |   " 
#define CS7 "  \\   /  "  
#define CS8 "   \\ /   "  
#define CS9 "    *     "  


/**
 * Draws a cool s to the screen
 * @param y the y value of the first line
 * @param x the x value of the cool s
*/
void draw_cool_s(WINDOW *w, int y, int x) {

  mvwaddstr(w, y, x, CS0); 
  mvwaddstr(w, y+1, x, CS1); 
  mvwaddstr(w, y+2, x, CS2);  
  mvwaddstr(w, y+3, x, CS3);  
  mvwaddstr(w, y+4, x, CS4);  
  mvwaddstr(w, y+5, x, CS5);  
  mvwaddstr(w, y+6, x, CS6); 
  mvwaddstr(w, y+7, x, CS7);  
  mvwaddstr(w, y+8, x, CS8);  
  mvwaddstr(w, y+9, x, CS9);  
  
}

int main(int argc, char * argv[]){

  //Locale "should" be set, according to ncurses man page
  setlocale(LC_ALL,"");

  //initialize screen, remove cursor
  WINDOW * w = initscr();
  curs_set(0);

  //Get window maximum values
  int max_y, max_x;
  getmaxyx(w, max_y, max_x);


  //frame loop
  for(int i = 0; i < max_x-10; i++) {
  	clear();

    //Draw smaller cool s
    for(int j = 0; j < max_y; j += 10){
      draw_cool_s(w, j, i);
    }

    //Draw smaller cool s
    if(i > 15){
      for(int j = 0; j < max_y; j += 10){
        draw_cool_s(w, j, i-15);
      }
    }


    usleep(40000);
    refresh();
  }

  //cleanup
  delwin(w);
  endwin();
  refresh();
  return 0;

}
