//Return characters
#include<stdio.h>
void DisplayRet(char str[])
{
   int iCnt=0;
  if(str==NULL)
  {return;}
  while(*str!='\0')
{
    iCnt++;
    str++;
}
 str--;
 while(iCnt>0)
 {
   printf("%c",*str);
   iCnt--;
   str--;
 }
}
int main()
{
  char Arr[10];
  int iRet=0;

  printf("Enter String\n");
  //fgets(Arr,40,stdin);
  scanf("%[^'\n']c",Arr);
  
  DisplayRet(Arr);
  //printf("%s\n",Arr);
  return 0;
}