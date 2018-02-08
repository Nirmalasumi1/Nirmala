#include<stdio.h>
int main()
{
int n,i,x=0,y=1,z;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i<=1)
{
  z=i;
}
else
{  
z=x+y;
x=y;
y=z;
}
printf("\n %d",z);
}  
return 0;
}
