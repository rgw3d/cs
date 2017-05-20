#include <curses.h>
#include <signal.h>
#include <unistd.h>


int main(int argc, char * argv[]){

  WINDOW * w = initscr();

  mvaddstr(10, 30, "    .    "); 
  mvaddstr(11, 30, "   / \\   "); 
  mvaddstr(12, 30, "  /   \\  ");  
  mvaddstr(13, 30, "  | | |  ");  
  mvaddstr(14, 30, "   \\ \\'  ");  
  mvaddstr(15, 30, "   ,\\ \\  ");  
  mvaddstr(16, 30, "  | | |  "); 
  mvaddstr(17, 30, "  \\   /  ");  
  mvaddstr(18, 30, "   \\ /   ");  
  mvaddstr(19, 30, "    *    ");  

  refresh();
  usleep(13000000);

  delwin(w);
  endwin();
  refresh();
  return 1;



}
