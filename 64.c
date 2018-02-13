#include<stdio.h>
int main()
{
int m,n;
printf("Enter the two numbers:");
scanf("%d%d",&m,&n);
sum=m+n;
if(sum%2==0)
{
printf("Even");
}
else
{
printf("odd");
}
return 0;
}
