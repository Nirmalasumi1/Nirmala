#include<stdio.h>
int main()
{
int num,i;
printf("enter the number:");
scanf("%d",&num);
for(i=1;i<=5;i++)
{
printf("%d*%d=%d\n",num*i);
}
return 0;
}
