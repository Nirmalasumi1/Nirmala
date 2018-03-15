#include<stdio.h>
int main()
{
  int a,b,a1,b1,a2,b2,d1,d2,d3;
  printf("enter the values:");
  scanf("%d %d",&a,&b);
  scanf("%d %d",&a1,&b1);
  scanf("%d %d",&a2,&b2);
  d1=b-a;
  d2=b1-a1;
  d3=b2-a2;
  printf("%d\n %d\n %d",d1,d2,d3);
  return 0;
}
