//Input :  5
//Output: * * * * *
#include<stdio.h>

void Pattern(unsigned int iNo)
{
 int iCnt=1;
 char ch= 'A';
 if(iNo<0)
 {iNo=-iNo;}
 printf("\n");
 for(iCnt=1;iCnt<=iNo;iCnt++)
 {
     printf(" %c \t",ch++);
 if((iNo>26)||(iNo<0))
 {
     printf("its only Contain 26 character");
     return;
 }
 }
 printf("\n");
}
int main()
{
    unsigned int iValue=0;  
    char cValue='\0';

    printf("Enter Number\n");
    scanf("%u",&iValue);
    printf("Enter Character\n");
    scanf(" %c",&cValue);
    Pattern(iValue);
    return 0;

}