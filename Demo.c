#include <stdio.h>
#include<stdbool.h>

bool ChkArmstrong(int iNum)
{
     int iDigit = 0, iSum = 0, iCube = 1;
     int temp = iNum;
     int iCnt = 0;

     while (temp != 0)
     {
          temp = temp / 10;
          iCnt++;
     }
     temp = iNum;

     while (temp != 0)
     {

          iDigit = temp % 10;
          for (int i = 1; i <= iCnt; i++)
          {
               iCube = iCube * iDigit;
          }
          iSum = iSum + iCube;
          iCube = 1;
          temp = temp / 10;
          printf("%d\n",iSum);
     }
     if (iSum == iNum)
     {
          return true;
     }
     else
     {
          return false;
     }
}

int main()
{

     int iNo = 0;
     bool bRet;

     printf("Enter Number:");
     scanf("%d",&iNo);

     bRet = ChkArmstrong(iNo);
     if (bRet == true)
     {
          printf("Armstrong  number");
     }
     else
     {
          printf( "It is not armstrong number");
     }
}