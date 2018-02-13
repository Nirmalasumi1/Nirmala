#include<stdio.h>
int main()
{
int n,a[50],i,sum=0,median;
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
median=sum/n;
}
printf("The median element is %d",median);
return 0;
}
