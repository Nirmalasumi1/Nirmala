#include<stdio.h>
int main()
{
int num,c=0,n=1,p=2,i;
printf("Enter the number:"); 
scanf("%d",&num);
while(num!=1)
{
num=num/2;
c++;
}
for(i=0;i<c+1;i++)
{
n=n*p;
}
printf("The nearest greater power of 2 is:%d",n);
return 0;
}
