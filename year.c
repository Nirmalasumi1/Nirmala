#include<stdio.h>
void main()
{
int n;
printf("enter the year:");
scanf("%d",&n);
if(n%4==0)
{
   if(n%100==0)
   {
      if(n%400==0)
      {
        printf("the year is leap:");
      else
        printf("the year is not leap:");
      }
     else
       printf("the year is leap:");
   }
else
{
printf("the year is not leap:");
}
}
}
