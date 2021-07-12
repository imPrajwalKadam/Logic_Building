#include<stdio.h>
typedef unsigned long int ULONG;
int MinDigit(ULONG iNo)
{
int iDigit=0,iChek=9;
if(iNo<0)
{iNo=-iNo;}
while(iNo>0)
{
iDigit=iNo%10;

if(iDigit<iChek)
{
    iChek=iDigit;
    if(iChek==0)
    {break;}
}
iNo=iNo/10;   
} 
 return iChek;  
}
int main()
{
    ULONG iValue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    iRet=MinDigit(iValue);
    printf("Smallest number is%d\n",iRet);
    
    return 0;
}

