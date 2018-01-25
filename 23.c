#include<stdio.h>
int main()
{
int n,a[25],i,min;
printf("Enter how many elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>min)
{
min=a[i];
}
}
printf("The min element is %d",min);
return 0;
}
