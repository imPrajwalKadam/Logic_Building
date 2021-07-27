//Acctep one String from user

#include<stdio.h>
void StrcCatX(char *src,char *dest)
{
  if(src==NULL||dest==NULL)
  {return;}
  while(*dest!='\0')
  {
    dest++;
  }
  *dest=' ';
  dest++;
while(*src!='\0')
  {
    *dest=*src;
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
  printf("Enter Second String\n");
  scanf(" %[^'\n']c",brr);
  
  StrcCatX(arr,brr);
  printf("After copying String is:%s\n",brr);
  return 0;
}