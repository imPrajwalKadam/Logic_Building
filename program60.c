/*
1.Create static character array int main function
2.Accept the string into that array
3.Pass that string to the function
4.Function will perform operation on that string.
*/
#include<stdio.h>
void Display(char str[])
{
  printf("Characters from string are\n");
   while(*str !='\0')
   {
     printf("%c\n",*str);
     str++;
   }
}1
int main()
{
  char Arr[10];

  printf("Enter your name\n");
  //fgets(Arr,40,stdin);
  scanf("%[^'\n']c",Arr);
  Display(Arr);

  return 0;
}