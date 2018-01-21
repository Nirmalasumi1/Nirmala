#include<stdio.h>
int main()
{
int num,r,result=0;
printf("Enter the number:");
scanf("%d",&num);
while(num!=0)
{
r=num%10;
result=r*r*r;
num=num/10;
}
if(result==num)
{
printf("It is an armstrong number:");
else
printf("It is not an armstrong number:");
}
  return 0;
}
