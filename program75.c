//Acctep one String from user

#include<stdio.h>
void StrCpyXx(char *src,char*dest)
{
  if(src==NULL||dest==NULL)
  {return;}
  while(*src!='\0')
  {
    if((*src>='a')&&(*src<='z'))
    {
      *dest=*src-32;
    }
    else{
    *dest=*src;
    }
    src++;
    dest++;
  }
  *dest='\0';
}
int main()
{
  char arr[20];
  char brr[20];
  int iRet=0;

  printf("Enter String\n");
  //fgets(Arr,40,stdin);
  scanf("%[^'\n']c",arr);
  
  StrCpyXx(arr,brr);
  printf("After copying String is:%s\n",brr);
  return 0;
}