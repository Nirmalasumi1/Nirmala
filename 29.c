#include<stdio.h>
int main()
{
int mins,hrs,rmins;
printf("Enter the minutes:");
scanf("%d",&mins);
hrs=mins/60;
rmins=mins%60;
printf("%d %d",hrs,rmins);
return 0;
}
