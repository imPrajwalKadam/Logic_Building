#include<stdio.h>
#include<stdbool.h>

bool ChkBit(unsigned int iNo,int iPose )
{
  int iDigit=0;

  unsigned int iMask=0x00000001;
  unsigned int iResult=0;

  if((iPose<1)||(iPose>32))
  {return false;}


  iMask=iMask<<(iPose-1);
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
  unsigned int iValue=0,iPose=0;
  bool bRet=0;

  printf("Enter Number\n");
  scanf("%u",&iValue);
  
  printf("Enter Position\n");
  scanf("%d",&iPose);
  bRet=ChkBit(iValue,iPose);

  if(bRet==true)
  {
    printf("bit is on");
  }
  else{
    printf("bit is off");
  }
}