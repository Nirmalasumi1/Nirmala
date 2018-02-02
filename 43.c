#include<stdio.h>
int main()
{
char str1[100],str2[100];
int i.j;
printf("Enter the string1:");
scanf("%s",&str1);
printf("Enter the string2:");
scanf("%s",&str2);
while(str1[i]!=0)
{
i++;
}
while(str2[j]!=0)
{
str1[i]=str2[j];
i++;
j++;
}
str1[i]=0;
printf("The concatenate string is %s",str1);
return 0;
}
