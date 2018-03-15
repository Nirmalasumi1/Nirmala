#include<stdio.h>
int main()
{
  float len,b,area;
  printf("enter the length:");
  scanf("%f",&len);
  printf("enter the breadth:");
  scanf("%f",&b);
  area=len*b;
  printf("%.5f",area);
  return 0;
}
