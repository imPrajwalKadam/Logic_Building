//Accept number from user and return the largest Digit
//Input:1259
//Output:7
#include<stdio.h>
int MaxDigit(int iNo)
{
int iDigit=0,iChek=0;
if(iNo<0)
{iNo=-iNo;}
while(iNo>0)
{
iDigit=iNo%10;

if(iDigit>iChek)
{
    iChek=iDigit;
    if(iChek==iChek)
    {break;}
}
iNo=iNo/10;   
} 
 return iChek;  
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    iRet=MaxDigit(iValue);
    printf("Largest number is%d\n",iRet);
    
    return 0;
}

