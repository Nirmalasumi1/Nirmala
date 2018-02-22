#include<stdio.h>
int main()
{
int m,n,p;
printf("Enter the numbers:");
scanf("%d%d",&m,&n);
p=m*n;
if(p%2==0)
{
printf("Even");
}
else
{
printf("Odd");
}
return 0;
}
