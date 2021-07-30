#include<stdio.h>

int CountOne(unsigned int iNo) 
{
  unsigned int iDigit=0;
  int iCnt=0;
  while(iNo)
  {
    iCnt+=(iNo%2);
    iNo=iNo/2;
  }
  return iCnt;
}

int main()
{
  unsigned int iValue=0;
  int iRet=0;
  printf("Enter Number:\n");
  scanf("%u",&iValue);

  iRet=CountOne(iValue);
  printf("Number of on bytes is:%d\n",iRet);

  return 0;
}