#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num1,num2;
  float result;
  char ch;
  printf("\n Choose an operation to perform(+,-,*,%,/):");
  scanf("%c",&ch);
  printf("\n Enter any two numbers:");
  scanf("%d %d",&num1,&num2);
  switch(ch)
  {
    case'+':result=num1+num2;
            break;
    case'-':result=num1-num2;
            break;
    case'*':result=num1*num2;
            break;
    case'/':result=num1/num2;
            break;
    case'%':result=num1%num2;
            break;
    default:printf("\n INvalid operation");
  }
  printf("\n %d %c %d=%f",num1,ch,num2,result);
}
