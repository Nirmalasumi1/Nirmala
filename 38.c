#include<stdio.h>
int main()
{
int a,b;
printf("Enter the two numbers:");
scanf("%d%d",&a,&b);
printf("Before swapping a=%d,b=%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\n After swapping a=%d,b=%d",a,b);
return 0;
}
