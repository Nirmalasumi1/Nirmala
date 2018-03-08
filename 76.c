#include<stdio.h>
int main()
{
int num,i,m=0;
printf("Enter the number:");
scanf("%d",&num);
for(i=0;i<num;i++)
{
if(n%i==0)
{
m++;
}
}
if(m>2)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
