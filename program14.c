//Write a program which accepts number from user and print 
//factor of that number.
//Input:6
//Output: 1 2 3 4 6
#include<stdio.h>
 void Factors(int iNo)
{                                                                             
  int iCnt=0;
  if(iNo<=0)
  { 
    iNo=-iNo;
  }
  for(iCnt=1;iCnt<iNo/2;iCnt++)
  {  
    if(iNo%iCnt==0) 
    {  
    printf("%d\n",iCnt);
    
    }
  }
}   
int main()
{
  int iValue=0;
  printf("Enter Number:");
  scanf("%d",&iValue);
  Factors(iValue);
  return 0;
}  
