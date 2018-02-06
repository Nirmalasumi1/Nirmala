#include<stdio.h>
int main()
{
int a[],n,i;
printf("Enter how many elemens:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("%d %d",a[i],i);
return 0;
}
