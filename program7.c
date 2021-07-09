//Accept numeber from user and chech whether that number is
//Divisible by 3 and 5
#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////
//Function name:CheckDivisible
//input:Integer
//Output:Boolean(True/false)
//Discription:it is used to check whether Divisible by 3and 6
//Date:01/03/2021
//Author:Prajwal kadam
///////////////////////////////////////////////////////
bool CheckDivisible(int iNo)
{
  if(((iNo%3)==0)&&((iNo%5)==0))
  {
    return true;
  }
  else{
    return false;
  }
}
int main()
{
  int iValue=0;
  bool bRet=false;
  printf("Enter number");
  scanf("%d",&iValue);

  bRet=CheckDivisible(iValue);
  if(bRet==true)
  {
    printf("%d is Divisible\n",iValue);
  }
  else
  {
    printf("%d  is not Divisible\n",iValue);
  }
  return 0;
}