#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("enter the angles of a triangle (a::\n");
  printf("a=");
  scanf("%d",&a);
  printf("b=");
  scanf("%d",&b);
  printf("c=");
  scanf("%d",&c);

  if(a+b+c!=180)
  printf("Invalid Angles\n");
  else if(a==b && b==c)
  printf("Equilateral Triangle\n");
  else if (a==b || b==c || c==a)
  printf("Isoceles\n");
  else
  printf("Scalene\n");
  return 0;
} 
