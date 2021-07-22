/*
1.Create static character array int main function
2.Accept the string into that array
3.Pass that string to the function
4.Function will perform operation on that string.
*/

//Without creating pointer
#include<stdio.h>
int strlenX(char str[])
{
  int iCnt=0;
  while(*str!='\0')
  {
    iCnt++;
    printf("%d: %c: %d\n",iCnt,*str,*str);
    str++;
  }
  return iCnt;
}

int main()
{
  char Arr[10];
  int iRet=0;

  printf("Enter your name\n");
  //fgets(Arr,40,stdin);
  scanf("%[^'\n']c",Arr);
  
  iRet=strlenX(Arr);
  printf("String length is:%d\n",iRet);
  return 0;
}