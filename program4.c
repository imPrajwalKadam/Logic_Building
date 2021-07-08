//Accept number from user and display All the numbers till that numbers.
//Input:8
//Output: 1 2 3 4 5 6 7 8 

//Input :-6
//Output:1 2 3 4 5 6
/*
Alogrithm
START
    Accept 1 number as no
    if number is negative then convert it to positive
    Create one counter as Cnt and set it to 1

    Iterate till the counter lessthan or equal to the number
     print the value of counter on screen
      Increment the value of counter by 1
     continue
     END
*/  
  #include<stdio.h>
  
  void Display(int iNo)  //5
  {
      int iCnt=0;

    //1 2 3 4 5 
    //START      1
    //END        5
    //Fifferenc  1
    if(iNo==0)
    {
        return;
    }
   if(iNo==0)
    {
    iNo= -iNo;
    }
     for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }     
  }

int main()//Entery point function
{
    int iValue=0;

    printf("Enter First number:");
    scanf("%d",&iValue);

    Display(iValue);
 
        return 0;
}