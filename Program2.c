//Accept 2 numberes from user return the maximum and minimum number.
/*
  Algorithm for Maximum
START
Accept first number as no1
Accept secod number as no2

if no1 is greter then no2
 then no1 is maximum
otherwise 
no2 is maximum

*/

//Include the user defined file
#include"Header2.h"
int main()
{
    int iNo1=0;
    int iNo2=0; 
    int iRet=0;

    printf("Enter First number");
    scanf("%d",&iNo1);

    printf("Enter Second number");
    scanf("%d",&iNo2);
    
    iRet=Maximum(iNo1,iNo2);
    printf("maximum number is:%d\n",iRet);
    return 0;
}
