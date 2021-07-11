//Accept number from user  and display the digits of that
// numbers  seapreatly in reverse order
//input:7521
//Output: 1 2 5 7
#include<stdio.h>
void DisplayDigit(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {iNo=-iNo;}
    while (iNo>0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }
}
int main()
{
    int iValue=0;
    printf("Enter first number");
    scanf("%d",&iValue);
    DisplayDigit(iValue);
    return 0;
}
