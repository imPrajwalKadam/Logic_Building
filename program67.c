/*
1.Create static character array int main function
2.Accept the string into that array
3.Pass that string to the function
4.Function will perform operation on that string.
*/

#include<stdio.h>
int String(char str[])
{
  int iCnt=0;
  while(*str!='\0')
  {
    if((*str<='A')||(*str<='Z'))
    {

      iCnt++;
    }
  str++;
  }
  return iCnt;
}


int main()
{
  char Arr[10];
  int iRet=0;
  printf("Enter your name\n");
  scanf("%[^'\n']c",Arr);

  iRet=String(Arr);
  printf("Count of character is:%d",iRet);
  return 0;
}