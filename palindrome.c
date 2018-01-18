#include<stdio.h>
int main()
{
int n,r,r1=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
r1=r1*10+r;
n=n/10;
}
if(n==r1)
{
printf("It is palindrome:");
else
printf("It is not palindrome:");
return 0;
}
}
