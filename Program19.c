/*
intput : 7                                                                 intput : 3
                                                                           Output : 
Output : 
         7 7 7 7 7 7 7 7 7 7 7 7 7                                                  3 3 3 3 3
         7 6 6 6 6 6 6 6 6 6 6 6 7                                                  3 2 2 2 3
         7 6 5 5 5 5 5 5 5 5 5 6 7                                                  3 2 1 2 3  
         7 6 5 4 4 4 4 4 4 4 5 6 7                                                  3 2 2 2 3 
         7 6 5 4 3 3 3 3 3 4 5 6 7                                                  3 3 3 3 3
         7 6 5 4 3 2 2 2 3 4 5 6 7
         7 6 5 4 3 2 1 2 3 4 5 6 7
         7 6 5 4 3 2 2 2 3 4 5 6 7
         7 6 5 4 3 3 3 3 3 4 5 6 7
         7 6 5 4 4 4 4 4 4 4 5 6 7
         7 6 5 5 5 5 5 5 5 5 5 6 7
         7 6 6 6 6 6 6 6 6 6 6 6 7                      
         7 7 7 7 7 7 7 7 7 7 7 7 7



         3 3 3 3 3
         3       3
         3       3  
         3       3 
         3 3 3 3 3
         
*/
#include <stdio.h>

void Pattern(int iNo)
{
    int iLength = 2 * iNo - 1; 
    int min1, min2, min;
    //  rows
    for (int i = 1; i <= iLength; i++)
    {
        //  col
        for (int j = 1; j <= iLength; j++)
        {
            // min diff btn vertical sides
            if (i <= iLength - i)
            {
                min1 = i - 1;
            }
            else
            {
                min1 = iLength - i;
            }
            // min diff btn horizontal sides
            if (j <= iLength - j)
            {
                min2 = j - 1;
            }
            else
            {
                min2 = iLength - j;
            }
            // min diff btn vertical & horizontal sides
            if (min1 <= min2)
            {
                min = min1;
            }
            else
            {
                min = min2;
            }
            // print
            printf("%d\t", iNo - min);
        }
        printf("\n");
        printf("\n");
    }
}
int main()
{
    int iNo;
    printf("Enter Number:  ");
    scanf("%d", &iNo);
    printf("\n");
    Pattern(iNo);
    return 0;
}
