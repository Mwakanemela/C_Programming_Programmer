/* float.c */
#include <stdio.h>

int main()
{
 float pi, radius, answer;

 printf("Enter radius of your circle\n");
 scanf("%f", &radius);

 pi = 3.14;
 answer = radius * radius * pi;

 printf("Area of your circle is %f\n", answer);
 return 0;
}
