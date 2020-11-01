//Program for interchange two numbers
#include <stdio.h>
#include<conio.h>

int main()

{
  int x, y, t;
//Taking input from the user
  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);

  printf("Before Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);

  //value of x is assigned to t
  t = x;
  
  //value of y assigned to x
  x = y;
  
  //value of t assigned to x
  y = t;

  printf("After Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);

  
}
