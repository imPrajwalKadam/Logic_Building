//Accept number from user and return the addition of all numbers till
//that number
//Input:4
//output:10(1+2+3+4)
#include<stdio.h>
int sum(int iNo)
{
  int iCnt=0,iSum=0;
  if(iNo==0)
  {
      return 0;
  }
  if(iNo<0)
  {
   iNo=-iNo;     
  }
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    iSum=iSum+iCnt;
  }
  return iSum;

}
int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iNo);
    iRet=sum(iNo);

    printf("Addition is:%d\n",iRet);
    return 0;

}