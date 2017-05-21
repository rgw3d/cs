#include <ncurses.h>
#include <signal.h>
#include <unistd.h>


#define CS0 "    .    " 
#define CS1 "   / \\   " 
#define CS2 "  /   \\  "  
#define CS3 "  | | |  "
#define CS4 "   \\ \\'  "  
#define CS5 "   ,\\ \\  "  
#define CS6 "  | | |  " 
#define CS7 "  \\   /  "  
#define CS8 "   \\ /   "  
#define CS9 "    *    "  


/**
 * Draws a cool s to the screen
 * @param y the y value of the first line
 * @param x the x value of the cool s
*/
void draw_cool_s(int y, int x) {

  mvaddstr(y, x, CS0); 
  mvaddstr(y+1, x, CS1); 
  mvaddstr(y+2, x, CS2);  
  mvaddstr(y+3, x, CS3);  
  mvaddstr(y+4, x, CS4);  
  mvaddstr(y+5, x, CS5);  
  mvaddstr(y+6, x, CS6); 
  mvaddstr(y+7, x, CS7);  
  mvaddstr(y+8, x, CS8);  
  mvaddstr(y+9, x, CS9);  
  
}

int main(int argc, char * argv[]){

  WINDOW * w = initscr();
	

  //frame loop
  for(int i = 0; i < 10; i++) {
  	clear();
	draw_cool_s(20 - 5* i, 30+i);
	refresh();
	usleep(500000);
  }

  //cleanup
  delwin(w);
  endwin();
  refresh();
  return 1;

}
