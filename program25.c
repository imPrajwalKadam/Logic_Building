//Accept number from user and check whether that number is pallindrom or not
//Input:7521
//Output:False
//Input:101
//Output:true
#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrom(int iNo)
{
    int iDigit=0, iRev=0,iCheck=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    iCheck=iNo;
    // iCheck=iRev;
    
    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }
        if(iRev==iCheck)
        {
            return true;
        }
        else{
            return false;
        }  
    }

 
    

int main()
{
    int iValue=0;
    bool bRet;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    bRet=CheckPalindrom(iValue);
    if(bRet==true)
    {
        printf("It is palindrome");
    }
    else{
        printf("It is not palindrom");
    }
    return 0;
}

