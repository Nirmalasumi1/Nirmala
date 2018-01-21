#include<stdio.h>
int main()
{
int base,exponent,result;
printf("enter the base:");
scanf("%d",&base);
printf("enter the exponent:");
scanf("%d",&exponent);
while(exponent!=0)
{
result=pow(base,exponent);
printf("%d^%d=%d",result);
}
return 0;
}
