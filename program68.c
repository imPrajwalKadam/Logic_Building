/*
1.Create static character array int main function
2.Accept the string into that array
3.Pass that string to the function
4.Function will perform operation on that string.
*/

//Without creating pointer
#include<stdio.h>
int strLwrX(char str[])
{
  if(str==NULL)
  {return 0;}
  while(*str!='\0')
  {
  if((*str>='A')&&(*str<='Z'))
  { 
    *str=*str+32;
  }
  str++;
}
}

int main()
{
  char Arr[10];
  int iRet=0;

  printf("Enter your name\n");
  //fgets(Arr,40,stdin);
  scanf("%[^'\n']s",Arr);
  
  strLwrX(Arr);
  printf("Updated Sting is:%s\n",Arr);
  return 0;
}