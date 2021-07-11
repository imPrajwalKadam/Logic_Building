//Accept number from user and return its reverse number
//Input:7521
//Output:1257
//Input:7500
//Output:75
#include<stdio.h>
int Reverse(int iNo)
{
    if(iNo<0)
    {iNo=-iNo;}
    int iDigit=0,iRev=0;
    while (iNo>0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }
    return iRev;
}


int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet=Reverse(iValue);
    printf("Reverse number is:%d\n",iRet);
    return 0;
}