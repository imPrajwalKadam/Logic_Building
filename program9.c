#include<stdio.h>
void CheckResult(int iMarks)
{
    if((iMarks<0)||(iMarks>100))
    {
        printf("Invalid\n");
        return;
    }
 if((iMarks>=0)&&(iMarks<35))
 {
     printf("You Are fall\n");
 }
 else if((iMarks>=35)&&(iMarks<50))
 {
     printf("pass class\n");
 }
else if((iMarks>=50)&&(iMarks<60))
{
    printf("second class\n ");
}
else if((iMarks>=60)&&(iMarks<70))
{
    printf("First class");
}
else
{
    printf("Pass with Distinction class ");
}
}
int main()
{
 int iValue=0;
  
 
  printf("Enter yor marks\n");
  scanf("%d",&iValue);
  CheckResult(iValue);
  
  return 0;
}

