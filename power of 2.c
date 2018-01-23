#include<stdio.h>
int main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
while(num==0)
{
return 1;
}
while(num>1)
{
if(num%2==0)
{
printf("It is power of 2:");
}
else
{
printf("It is not power of 2:");
}
return 0;
}
}
