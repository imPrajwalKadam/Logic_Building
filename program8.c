#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1,int iNo2)
{ 
    if((iNo2 % iNo1)==0)
   { return true;}
    else
    {return false;}
}
int main()
{
  int iValue1=0;
  int iValue2=0;
  bool bRet;
  printf("Enter first number");
  scanf("%d",&iValue1);
  printf("Enter Second number");
  scanf("%d",&iValue2);

  bRet=CheckDivisible(iValue1,iValue2);
  if(bRet==true)
  {
    printf("%d is Divisible\n",iValue1,iValue2);
  }
  else
  {
    printf("%d  is not Divisible\n",iValue1,iValue2);
  }
  return 0;
}