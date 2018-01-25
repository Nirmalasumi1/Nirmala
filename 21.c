#include<stdio.h>
int main()
{
int N,A,D,i,sum=0,val;
printf("Enter the N,A and D:");
scanf("%d %d %d",&N,&A,&D);
val=A;
for(i=0;i<N;i++)
{
printf("%d",&val);
sum=sum+val;
val=val+D;
}
printf("\nThe sum of the seriesis %d",sum);
return 0;
}
