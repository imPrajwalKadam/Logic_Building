//Accept one number and check whether its perfect or not
#include<stdio.h>
#include<stdbool.h>
bool FactorsSum(int iNo)

{                                                                             
  int iCnt=0,iSum=0;
  if(iNo<=0)
  { 
    iNo=-iNo;
  }
  for(iCnt=1;iCnt<=iNo/2;iCnt++)
  {  
    if((iNo%iCnt)==0) 
    {  
    iSum=iSum+iCnt;
    }
  }
  if(iSum==iNo)
{return true;}
else
 {return false;}
}
int main()
{
    int iValue=0;
    bool bRet=0;

    printf("Enter number");
    scanf("%d",&iValue);
    bRet=FactorsSum(iValue);
    if(bRet==true)
    {printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%dis Not perfect number\n",iValue);
    }
    return 0;

}