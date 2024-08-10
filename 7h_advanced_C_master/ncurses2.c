/* ncurses2.c */
#include <ncurses.h>

int main()
{
 int x, y;

 initscr();
 clear();

 getyx(stdscr, x, y);
 
 printw("(x = %d , y = %d):", x,y);
 refresh();

 x = 5;
 y = 10;
 
 move(y, x);

 printw("Moved x = 5 y = 10");
 refresh();

 getch();
 endwin();
 return 0;
}
