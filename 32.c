#include<stdio.h>
int main()
char s[100];
int count=0,i;
printf("Enter the string:");
scanf("%s",&s);
for(i=0;s[i]!=0;i++)
{
if(s[i]=='')
count++;
}
printf("The number of words in a given string is %d",count+1);
return 0;
}
