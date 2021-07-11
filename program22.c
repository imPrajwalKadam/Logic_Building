//Input:75241  5
//Output:2
#include<stdio.h>
int digitFrequency(int iNo,int i)
{
    int iDigit=0,iCnt=0;
    if(iNo<0)
    {iNo=-iNo;}
    if((i<0)||(i>9))
    {
        printf("Invalid Digits\n");
        return 0;
        }
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit==i)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("Enter  number");
    scanf("%d",&iValue1);
    printf("Enter the digit that you to searche\n");
    scanf("%d",&iValue2);
  
    iRet=digitFrequency(iValue1,iValue2);
    printf(" Number of given digits are:%d\n",iRet);
    return 0;
}
