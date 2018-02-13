#include<stdio.h>
int main()
{
int x=0,y=1,z,n,i;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 if(n<=1)
 {
   z=i;
 }
 else
 {
z=x+y;
x=y;
y=z;
 }
}
printf("The fibonacci series is %d\n",z);
return 0;
}
