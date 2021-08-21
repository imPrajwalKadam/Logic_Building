  #include<stdio.h>
#include<stdbool.h>

bool ChkBit(unsigned int iNo,int iPose1,int iPose2 )
{
  int iDigit=0;

  unsigned int iMask1=0x00000001;
  unsigned int iMask2=0x00000001;
  unsigned int iMask=0x00000000;
  unsigned int iResult=0;

  if((iPose1<1)||(iPose1>32)||(iPose2<1)||(iPose2>32))
  {return false;}


  iMask1=iMask1<<(iPose1-1);
  iMask2=iMask2<<(iPose2-1);
  iMask=iMask1|iMask2;
   iResult=iNo&iMask1;
  if(iResult=iMask)
  {return true;}
  else{
  return false;}
}
int main()
{
  unsigned int iValue=0,iPose1=0,iPose2=0;
  bool bRet=0;

  printf("Enter Number\n");
  scanf("%u",&iValue);
  
  printf("Enter First Position\n");
  scanf("%d",&iPose1);
  printf("Enter Second position\n");
  scanf("%d",&iPose2);
  bRet=ChkBit(iValue,iPose1,iPose2);
  if(bRet==true)
  {
    printf("Bit are on\n");
  }
  else{
    printf("bit are off\n");
  }
  return 0;
}