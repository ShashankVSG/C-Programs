#include<stdio.h>
int string_length(char s[]);
int string_compare(char s1[],char s2[]);
void string_concat(char s1[],char s2[]);
int main()
{
  char s1[20],s2[20];
  int strlen1,strlen2,s;
  printf("\n Enter string1:");
  scanf("%s",s1);
  printf("\n Enetr string2:");
  scanf("%s",s2);
  strlen1=string_length(s1);
  strlen2=string_length(s2);
  printf("\n Length of %s=%d\n Length of %s=%d",s1,strlen1,s2,strlen2);
  s=string_compare(s1,s2);
  if(s==0)
  printf("\n Strings are equal");
  else if(s>0)
  printf("\n %s is greater than %s",s1,s2);
  else
  printf("\n %s is smaller than %s",s1,s2);
  string_concat(s1,s2);
  printf("\n Concatenated string:%s",s1);
}
int string_length(char s[])
{
  int i=0;
  while(s[i]!='\0')
  {
    i++;
  }
  return i;
}
int string_compare(char s1[],char s2[])
{
  int i=0;
  while(s1[i]==s2[i]&&s1[i]!='\0'&&s2[i]!='\0')
  {
    i++;
  }
  return s1[i]-s2[i];
}
void string_concat(char s1[],char s2[])
{
  int i=0,j=0;
  while(s1[i]!='\0')
  {
    i++;
  }
  while(s2[j]!='\0')
  {
    s1[i]=s2[j];
    i++;j++;
  }
  s1[i]='\0';
}
