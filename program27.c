//Accept number from user and return the Smallest Digit
//Input:1257
//Output:1
#include<stdio.h>
int MaxDigit(int iNo)
{
int iDigit=0,iMin=9;
if(iNo<0)
{iNo=-iNo;}
while(iNo>0)
{
iDigit=iNo%10;

if(iDigit<iMin)
{
    iMin=iDigit;
    if(iMin==0)
    {break;}
}
iNo=iNo/10;   
} 
 return iMin;  
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    iRet=MaxDigit(iValue);
    printf("Smallest number is%d\n",iRet);
    
    return 0;
}
