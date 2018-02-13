#include<stdio.h>
int main()
{
int x=0,y=1,z,n;
printf("Enter the number:");
scanf("%d",&n);
while(n!=0)
{
z=x+y;
x=y;
y=z;
}
printf("The fibonacci series is %d",z);
return 0;
}
