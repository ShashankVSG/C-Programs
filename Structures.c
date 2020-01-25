#include<stdio.h>
struct student
{
  char usn[20],name[20];
  int marks;
};
int main()
{
  struct student s[10];
  int i,n,countav=0,countbv=0;
  float sum=0,average;
  printf("\n Enter number of students:");
  scanf("%d",&n);
  printf("\n Enter student details:\n");
  for(i=0;i<n;i++)
  {
    printf("\n Enter Name:\tUSN:\tMarks:");
    scanf("%s %s %d",s[i].name,s[i].usn,&s[i].marks);
  }
  for(i=0;i<n;i++)
  sum=sum+s[i].marks;
  average=sum/n;
  printf("\n Average marks=%.3f",average);
  for(i=0;i<n;i++)
  {
    if(s[i].marks>=average)
    countav++;
    else
    countbv++;
  }
  printf("\n No of students below average=%d",countbv);
  printf("\n No of students above average=%d",countav);
}
