#include<stdio.h>

unsigned int OffBit(unsigned int iNo) 
{
  unsigned int  iMask=0xFFFFFFFB;
  unsigned int Result=0;  
  Result=iNo&iMask;
  return Result;
}

int main()
{
  unsigned int iValue=0;
  
  unsigned int iRet=0;
  printf("Enter Number:");
  scanf("%u\n",&iValue);

  iRet=OffBit(iValue);
  printf("Number of on bytes is:%d",iRet);

  return 0;
}