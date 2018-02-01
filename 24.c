#include<stdio.h>
int main()
{
int a[100],n;
int i,j,temp;
printf("Enter how many elements in an array:");
scanf("%d",&n);
printf("Enter the elements in an array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\n Elements of array in ascending order:");
for(i=0;i<n;i++)
{
  printf("%d\t",a[i]);
}
return 0;
}
