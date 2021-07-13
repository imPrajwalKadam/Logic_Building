#include<stdio.h>
int Maxmin(int iNo)
{
 int iMin=9,iMax=0,iDigit=0;
 if(iNo<0)
 {iNo=-iNo;}
 while(iNo>0)
{
iDigit=iNo%10;
if(iDigit>iMax)
{
    iMax=iDigit;
}
if(iDigit<iMax)
{
    iMax=iDigit;
    }
iNo=iNo/10;   
} 
 return iMax-iMin;  
 
}
int main()
{
    int iValue1=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    iRet=Maxmin(iValue1);
    printf("Difference is:%d\n",iRet);
    return 0;
}