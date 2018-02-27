#include<stdio.h>
int main()
{
int n,i,n1;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
n1++;
}
}
if(n1==2)
{
printf("It is prime");
}
else
{
printf("It is not prime");
}
return 0;
}
