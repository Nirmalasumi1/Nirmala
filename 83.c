#include<stdio.h>
int main()
{
  int a1,b1,a2,b2,a3,b3,a4,b4,n1,n2,n3,n4;;
  printf("enter the values:");
  scanf("%d/%d",&a1,&b1);
  scanf("%d%%d",&a2,&b2);
  scanf("%d/%d",&a3,&b3);
  scanf("%d%%d",&a4,&b4);
  n1=a1/b1;
  n2=a2%b2;
  n3=a3/b3;
  n4=a4%b4;
  printf("%d\n%d\n%d\n%d",n1,n2,n3,n4);
  return 0;
}
