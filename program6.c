//Accept numeber from user and chech whether that number is
//even orr odd
//Input:4
//Out:Its Even
#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////
//Function name:CheckEven
//input:Integer
//Output:Boolean(True/false)
//Discription:it is used to check whether number is even or odd
//Date:01/03/2021
//Author:Prajwal kadam
///////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
  if(iNo %2==0)
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

  bRet=CheckEven(iValue);
  if(bRet==true)
  {
    printf("%d is even number\n",iValue);
  }
  else
  {
    printf("%d is odd number\n",iValue);
  }
  return 0;
  }