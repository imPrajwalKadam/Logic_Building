#include<stdio.h>
void strToggle(char str[])
{
  if(str==NULL)
  {return;}
  while(*str!='\0')
  {
  if((*str>='a')&&(*str<='z'))
  { 
    *str=*str-32;
  }
  else if((*str>='A')&&(*str<='Z'))
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

  printf("Enter String\n");
  //fgets(Arr,40,stdin);
  scanf("%[^'\n']s",Arr);
  
  strToggle(Arr);
  printf("Updated Sting is:%s\n",Arr);
  return 0;
}