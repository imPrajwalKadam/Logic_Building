//Accept number from user and display its table
//Input:4
//Output:4,8,12,16,20.....

#include<stdio.h>
int DisplayTable(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d\n",iNo*iCnt);
    }       
}
int main()
{
 int iValue=0;
 printf("Enter number\n");
 scanf("%d",&iValue);
 DisplayTable(iValue);
  return 0;
}
