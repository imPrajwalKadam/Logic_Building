/*
1.Create static character array int main function
2.Accept the string into that array
3.Pass that string to the function
4.Function will perform operation on that string.
*/

//Without creating pointer
#include<stdio.h>
void Display(char str[])
{
  int iCnt=0;
  printf("Characters from string are\n");
   while(str[iCnt]!='\0')
   {
     printf("%c\n",str[iCnt]);
     str++;
   }
}

int main()
{
  char Arr[10];

  printf("Enter your name\n");
  //fgets(Arr,40,stdin);
  scanf("%[^'\n']c",Arr);
  Display(Arr);

  return 0;
}