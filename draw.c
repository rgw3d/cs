#include "draw.h"
void draw_pico_cool_s(WINDOW *w, int y, int x) {

  mvwaddstr(w, y+0, x, PCS0); 
  mvwaddstr(w, y+1, x, PCS1); 
  mvwaddstr(w, y+2, x, PCS2);  
}

void draw_tiny_cool_s(WINDOW *w, int y, int x) {

  mvwaddstr(w, y+0, x, TCS0); 
  mvwaddstr(w, y+1, x, TCS1); 
  mvwaddstr(w, y+2, x, TCS2);  
  mvwaddstr(w, y+3, x, TCS3);  
  mvwaddstr(w, y+4, x, TCS4);  
  mvwaddstr(w, y+5, x, TCS5);  
  mvwaddstr(w, y+6, x, TCS6); 
  
}

void draw_cool_s(WINDOW *w, int y, int x) {

  mvwaddstr(w, y+0, x, CS0); 
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

void draw_large_cool_s(WINDOW *w, int y, int x) {

  mvwaddstr(w, y+0, x,  LCS0); 
  mvwaddstr(w, y+1, x,  LCS1); 
  mvwaddstr(w, y+2, x,  LCS2);  
  mvwaddstr(w, y+3, x,  LCS3);  
  mvwaddstr(w, y+4, x,  LCS4);  
  mvwaddstr(w, y+5, x,  LCS5);  
  mvwaddstr(w, y+6, x,  LCS6); 
  mvwaddstr(w, y+7, x,  LCS7);  
  mvwaddstr(w, y+8, x,  LCS8);  
  mvwaddstr(w, y+9, x,  LCS9);  
  mvwaddstr(w, y+10, x, LCS10);  
  mvwaddstr(w, y+11, x, LCS11);  
  mvwaddstr(w, y+12, x, LCS12);  
  mvwaddstr(w, y+13, x, LCS13);  
  mvwaddstr(w, y+14, x, LCS14);  
  mvwaddstr(w, y+15, x, LCS15);  
  mvwaddstr(w, y+16, x, LCS16);  
  mvwaddstr(w, y+17, x, LCS17);  
  mvwaddstr(w, y+18, x, LCS18);  
  mvwaddstr(w, y+19, x, LCS19);  
  
}

void draw_mega_cool_s(WINDOW *w, int y, int x) {

  mvwaddstr(w, y+0, x,  MCS0); 
  mvwaddstr(w, y+1, x,  MCS1); 
  mvwaddstr(w, y+2, x,  MCS2);  
  mvwaddstr(w, y+3, x,  MCS3);  
  mvwaddstr(w, y+4, x,  MCS4);  
  mvwaddstr(w, y+5, x,  MCS5);  
  mvwaddstr(w, y+6, x,  MCS6); 
  mvwaddstr(w, y+7, x,  MCS7);  
  mvwaddstr(w, y+8, x,  MCS8);  
  mvwaddstr(w, y+9, x,  MCS9);  
  mvwaddstr(w, y+10, x, MCS10);  
  mvwaddstr(w, y+11, x, MCS11);  
  mvwaddstr(w, y+12, x, MCS12);  
  mvwaddstr(w, y+13, x, MCS13);  
  mvwaddstr(w, y+14, x, MCS14);  
  mvwaddstr(w, y+15, x, MCS15);  
  mvwaddstr(w, y+16, x, MCS16);  
  mvwaddstr(w, y+17, x, MCS17);  
  mvwaddstr(w, y+18, x, MCS18);  
  mvwaddstr(w, y+19, x, MCS19);  
  mvwaddstr(w, y+20, x, MCS20);  
  mvwaddstr(w, y+21, x, MCS21);  
  mvwaddstr(w, y+22, x, MCS22);  
  mvwaddstr(w, y+23, x, MCS23);  
  mvwaddstr(w, y+24, x, MCS24);  
  mvwaddstr(w, y+25, x, MCS25);  
  mvwaddstr(w, y+26, x, MCS26);  
  mvwaddstr(w, y+27, x, MCS27);  
  
}

void draw_line(WINDOW *w, const char * line, int y, int x, int num){
  for(int i = y; i < y+num; i++){
    mvwaddstr(w, i, x, line);  
  }

}

void draw_blink(WINDOW *w, int max_x, int max_y, int cs_width, int cs_height, const char * blank, void (*draw_function)(WINDOW *, int, int)){

  for(int i = 0; i < 2; i++){
    draw_function(w,   max_y/2 - cs_height/2, max_x/2 - cs_width/2);
    refresh();
    usleep(200000);

    draw_line(w, blank, max_y/2 - cs_height/2, max_x/2 - cs_width/2, cs_height);
    refresh();
    usleep(150000);
  }

}


