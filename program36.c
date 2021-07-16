/*Input :  3 3
Output: * * *
        * * *
        * * *            */         
#include<stdio.h>

void Pattern(unsigned int iRow,unsigned int iCol)
{
    int i=0,j=0;
    printf("\n");
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }

}

int main()
{
    unsigned int iValue1=0,iValue2=0; 
    
    printf("Enter Number of rows\n");
    scanf("%u",&iValue1);
    printf("Enter Number of Columns\n");
    scanf("%u",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;

}