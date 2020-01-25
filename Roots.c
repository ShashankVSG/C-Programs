#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c,d,rpart,ipart,root1,root2;
  printf("\n Enter values for coefficient:");
  scanf("%f %f %f",&a,&b,&c);
  if(a==0&&b==0)
  {
    printf("\n Invalid");
  }
  else if(a==0)
  {
    printf("\n Linear equation");
    root1=-c/b;
    printf("\n Root=%f",root1);
  }
  else
  {
    d=b*b-(4*a*c);
    if(d==0)
    {
      printf("\n Roots are equal");
      root1=-b/(2*a);
      root2=root1;
      printf("\n Roots are %.3f and %.3f",root1,root2);
    }
    else if(d>0)
    {
      printf("\n Roots are real and distinct");
      root1=(-b+sqrt(d))/(2*a);
      root2=(-b-sqrt(d))/(2*a);
      printf("\n Roots are %.3f and %.3f",root1,root2);
    }
    else
    {
      printf("\n Roots are imaginary");
      rpart=-b/(2*a);
      ipart=sqrt(fabs(d))/(2*a);
      printf("\n Root1=%.3f+i%.3f and Root2=%.3f-i%.3f",rpart,ipart,rpart,ipart);
    }
  }
}
