#include<stdio.h>
int main()
{
int base,exponent,result;
printf("enter the base:");
scanf("%d",&base);
printf("enter the exponent:");
scanf("%d",&exponent);
while(base!=0)
{
result=power(base,exponent);
printf("%d",result);
}
return 0;
}
