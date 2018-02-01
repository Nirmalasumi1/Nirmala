#include<stdio.h>
int main()
{
int a[size],size;
int i,j,temp;
printf("Enter the size of an array:");
scanf("%d",&size);
printf("Enter the elements in an array:");
for(i=0;i<size;i++)
{
printf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
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
return 0;
}
