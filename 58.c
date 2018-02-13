#include<stdio.h>
int main()
{
int m,n;
printf("Enter the two numbers:");
scanf("%d%d",&m,&n);
printf("Before swapping m=%d n=%d",m,n);
m=m^n;
n=m^n;
m=m^n;
printf("\n After swapping m=%d n=%d",m,n);
return 0;
}
