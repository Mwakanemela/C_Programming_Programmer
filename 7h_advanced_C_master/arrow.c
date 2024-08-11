/* arrow.c - a program that arrows user to move an item using keyboard arrows */
#include <ncurses.h>

int main()
{
 int key, x, y;

 initscr();
 keypad(stdscr, TRUE);

 noecho();
 x = y = 5;

 while(key != 'q')
 {
  clear();
  move(0,0);
  printw("Move using the arrows (left, right, top, bottom) - press q to quit");

  move(y,x);
  printw("Mwaka");

  refresh();

  key = getch();
  if(key == KEY_LEFT)
  {
   x--;
   if(x < 0) x = 0;
  }
  else if(key == KEY_RIGHT)
  {
   x++;
   if(x > 50) x=50;
  }
  else if(key == KEY_UP)
  {
   y--;
   if(y  < 1) y =1;
  }
  else if(key == KEY_DOWN)
  {
   y++;
   if(y > 10) y = 10;
  }
 }

endwin();

return 0;
}
