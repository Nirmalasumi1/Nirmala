#include<stdio.h>
int main()
{
int n,r=0,rem,a;
printf("Enter the number:");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
r=r*10+rem
n=n/10;
}
while(r!=0)
{
a=r%10;
printf("%d\t",a);
r=r/10;
}
return 0;
}
