#include<stdio.h>
#include<string.h>
int main()
{
  char str[75];
  int i,len;
  printf("Enter the string:");
  scanf("%s",str);
  len=strlen(str);
  for(i=0;i<len;i++)
  {
  if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o') ||(str[i]=='u'))
    {
      printf("yes");
      break;
    }
  }
  return 0;
}
