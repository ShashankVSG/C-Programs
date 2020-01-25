#include<stdio.h>
int main()
{
  int n,rev=0,temp,digit;
  printf("\n Enter an integer number:");
  scanf("%d",&n);
  temp=n;
  while(n!=0)
  {
    digit=n%10;
    rev=rev*10+digit;
    n=n/10;
  }
  printf("\n Given number=%d",temp);
  printf("\n Reverse of number=%d",rev);
  if(rev==temp)
  printf("\n The number is palindrome");
  else
  printf("\n The number is not palindrome");
}
