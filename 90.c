#include<stdio.h>
#include<string.h>
int main()
{
  char s[50];
  int i;
  printf("Enter the string:");
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
  if(s[i]>='0' && s[i]<='9')
  {
    printf("%c",s[i]);
  }
}
}
