#include<stdio.h>
int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
while(n>0)
{
m=n%10;
if(m%2!=0)
{
printf("%d",m);
}
n=n/10;
}
return 0;
}
