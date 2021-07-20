/*
1.Create static character array int main function
2.Accept the string into that array
3.Pass that string to the function
4.Function will perform operation on that string.
*/


#include<stdio.h>

int main()
{
  char Arr[40];

  printf("Enter your name\n");
  //scanf("%s",Arr);
  //gets(Arr);
  //fgets(Arr,40,stdin);
  scanf("%[^'\n']s",&Arr);

  printf("Your name is:%s\n",Arr);

  return 0;
}