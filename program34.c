//Input :  5
//Output: * * * * *
#include<stdio.h>

void Pattern(unsigned int iNo)
{
 int iCnt=1;
 if(iNo<0)
 {iNo=-iNo;}
 printf("\n");
 for(iCnt=iNo;iCnt>=1;iCnt--)
 {
     printf("\t*\t%d",iCnt);
 }
 printf("\n");
}
int main()
{
    unsigned int iValue=0;

    printf("Enter Number\n");
    scanf("%u",&iValue);
    Pattern(iValue);
    return 0;

}