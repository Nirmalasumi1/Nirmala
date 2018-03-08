#include<stdio.h>
int main()
{
int a,b,m,i;
printf("Enter the two numbers:");
scanf("%d%d",&a,&b);
m=a*b;
for(i=1;i<m;i++)
{
  if(m==i*i)
  {
    printf("yes");
    break;
  }
}
  return 0;
}
