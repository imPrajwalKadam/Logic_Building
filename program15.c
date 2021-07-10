//Accept numbers and return the addition of its factors
//Input
//Output
#include<stdio.h>
 int FactorsSum(int iNo)
{                                                                             
  int iCnt=0,iSum=0;
  if(iNo<=0)
  { 
    iNo=-iNo;
  }
  for(iCnt=1;iCnt<iNo/2;iCnt++)
  {  
    if(iNo%iCnt==0) 
    {  
    iSum=iSum+iCnt;
    }
  }
  return iSum;
}   
int main()
{
  int iValue=0,iRet=0;
  printf("Enter Number:");
  scanf("%d",&iValue);
  iRet=FactorsSum(iValue);
  printf("Summation is:%d\n",iRet);
  return 0;
}  
