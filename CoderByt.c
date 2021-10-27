/* Input : atharva kadam pradip
   Output: Atharva Kadam Pradip */
#include<stdio.h>
void StringrevX(char src[])
{
      src[0] = src[0] - 32;
      int iFlag = 0;

      while(*src != '\0')
      {
            if(*src == ' ')
            {
                  iFlag = 1;
            }
            src++;
            if(iFlag == 1)
            {
                  *src = *src - 32;
            }
            iFlag = 0;
      }
}
int main()
{
      char arr[30];

      printf("Enter String:");
      scanf("%[^'\n']c",arr);

      StringrevX(arr);
      printf("%s",arr);
      return 0;
}