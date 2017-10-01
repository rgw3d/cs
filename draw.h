#ifndef DRAW_COOL_S
#define DrAW_COOL_S

#include <ncurses.h>

//Pico Cool S
#define PCS0 "   " 
#define PCS1 " S " 
#define PCS2 "   " 
#define PCS_WIDTH  (3)
#define PCS_HEIGHT (3)

//Tiny Cool S
#define TCS0 " . " 
#define TCS1 "/ \\"  
#define TCS2 "|||"   
#define TCS3 " \\\\"  
#define TCS4 "|||"   
#define TCS5 "\\ /"  
#define TCS6 " * "  
#define TCS_WIDTH  (4)
#define TCS_HEIGHT (7)

//Cool S
#define CS0 "  .    " 
#define CS1 " / \\  " 
#define CS2 "/   \\ "  
#define CS3 "| | |  "
#define CS4 " \\ \\'"  
#define CS5 " ,\\ \\"  
#define CS6 "| | |  " 
#define CS7 "\\   / "  
#define CS8 " \\ /  "  
#define CS9 "  *    "  
#define CS_WIDTH  (7)
#define CS_HEIGHT (10)

//Large Cool S
#define LCS0  "    .     "           
#define LCS1  "   / \\   "           
#define LCS2  "  /   \\  "          
#define LCS3  " /     \\ "        
#define LCS4  "/       \\"         
#define LCS5  "|   |   | "         
#define LCS6  "|   |   | "
#define LCS7  "|   |   | "         
#define LCS8  " \\  \\  ,"      
#define LCS9  "  \\  \\  "        
#define LCS10 "   \\  \\ "          
#define LCS11 ",   \\  \\"       
#define LCS12 "|   |   | "     
#define LCS13 "|   |   | "      
#define LCS14 "|   |   | "     
#define LCS15 "\\       /"   
#define LCS16 " \\     / "         
#define LCS17 "  \\   /  "        
#define LCS18 "   \\ /   "      
#define LCS19 "    *     "    
#define LCS_WIDTH  (10)
#define LCS_HEIGHT (20)

//Mega Cool S
#define MCS0  "       .        "  
#define MCS1  "      / \\      "   
#define MCS2  "     /   \\     "    
#define MCS3  "    /     \\    "        
#define MCS4  "   /       \\   "     
#define MCS5  "  /         \\  "    
#define MCS6  " /           \\ "    
#define MCS7  "/             \\"       
#define MCS8  "|      |      | "  
#define MCS9  "|      |      | " 
#define MCS10 "|      |      | " 
#define MCS11 " \\      \\    /"  
#define MCS12 "  \\      \\  / "  
#define MCS13 "   \\      \\   "     
#define MCS14 "    \\      \\  "       
#define MCS15 "  /  \\      \\ "      
#define MCS16 " /    \\      \\"         
#define MCS17 "|      |      | "         
#define MCS18 "|      |      | "       
#define MCS19 "|      |      | "         
#define MCS20 "\\             /"         
#define MCS21 " \\           / "         
#define MCS22 "  \\         /  "       
#define MCS23 "   \\       /   "      
#define MCS24 "    \\     /    "        
#define MCS25 "     \\   /     "     
#define MCS26 "      \\ /      "      
#define MCS27 "       *        "     
#define MCS_WIDTH  (16)
#define MCS_HEIGHT (28)


/**
 * Draws a pico cool s to the screen
 * @param y the y value of the first line
 * @param x the x value of the cool s
*/
void draw_pico_cool_s(WINDOW *w, int y, int x);

/**
 * Draws a tiny cool s to the screen
 * @param y the y value of the first line
 * @param x the x value of the cool s
*/
void draw_tiny_cool_s(WINDOW *w, int y, int x);

/**
 * Draws a cool s to the screen
 * @param y the y value of the first line
 * @param x the x value of the cool s
*/
void draw_cool_s(WINDOW *w, int y, int x);

/**
 * Draws a large cool s to the screen
 * @param y the y value of the first line
 * @param x the x value of the cool s
*/
void draw_large_cool_s(WINDOW *w, int y, int x);

/**
 * Draws a mega cool s to the screen
 * @param y the y value of the first line
 * @param x the x value of the cool s
*/
void draw_mega_cool_s(WINDOW *w, int y, int x);

#endif
