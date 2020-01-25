#include<stdio.h>
int main()
{
  char name[25];
  float unit,charge,min=100;
  printf("\n Enter your name and units consumed:");
  scanf("%s %f",name,&unit);
  if(unit<=200)
  charge=unit*0.8+min;
  else if(unit<=300)
  charge=(unit-200)*0.9+160+min;
  else if(unit>300)
  charge=(unit-300)+250+min;
  if(charge>=400)
  charge=charge+charge*0.15;
  printf("\n Name:%s\n Charge:%.3f",name,charge);
}
