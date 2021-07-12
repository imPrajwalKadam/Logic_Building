//Accept number from user and return the Smallest Digit
//Input:10
//Output:18-37(1+2+5+10)-(3+4+6+7+8+9)
//Output:-19
#include<stdio.h>
int FactDiff(int iNo)
{
    int i=0;
    int iSum1=0;
    int iSum2 = 0;

    for(i=1;i<iNo;i++)
    {
      if(iNo%i==0)
      {
        iSum1 = iSum1 + i;
      }  
      else
      {
        iSum2 = iSum2 + i;
      }
    }    
    return iSum1-iSum2;
}   


int main()
{
    int iValue1=0;
    int iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    iRet=FactDiff(iValue1);
    printf("%d\n",iRet);
    return 0;
}