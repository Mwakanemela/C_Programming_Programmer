/* countdown.c */
#include<stdio.h>
#include<unistd.h>

int main()
{
 int number = 11;

 while(1)
 {
  number--;
  if(number == 3)
   continue;

  if(number != 0)
   printf("New Year in %d\n", number);
  sleep(1);
 
  if(number < 1)
  {
   printf("Happy New Year!!\n");
   break;
  }
 }
 return 0;
}
