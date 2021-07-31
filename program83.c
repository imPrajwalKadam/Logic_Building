3 5 7

#include<stdio.h>
#include<stdbool.h>

bool ChkBit(unsigned int iNo)
{
  int iDigit=0;

  unsigned int iMask=0x00000054;
  unsigned int iResult=0;
  iResult=iNo&iMask;
  if(iResult==iMask)
  {
    return true;
  }    
  else{
    return false;
  }

}
int main()
{
  unsigned int iValue=0;
  bool bRet=0;

  printf("Enter Number\n");
  scanf("%u",&iValue);

  bRet=ChkBit(iValue);

  if(bRet==true)
  {
    printf("5th bit is on");
  }
  else{
    printf("5th bit is off");
  }
}