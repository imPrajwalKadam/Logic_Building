/*Input :  Row=4  Column= 4
Output: # 
        # # 
        # # # 
        # # # #
        
                 */         
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
   int i=1,j=1;
   if(iRow!=iCol)
   {return;}
   
   printf("\n");

   for(i=1;i<=iRow;i++)
   {
      for(j=1;j<=iCol;j++)
      {
         if(i>=j)
         {
         printf("#\t");
        }
       
      }
     printf("\n");
   }
   }

 int main() 
{ 
 int iValue1 = 0;
 int iValue2 = 0; 
 printf("Enter number of Rows"); 
 scanf("%d",&iValue1);
 printf("Enter Number of Columns");
 scanf("%d",&iValue2); 
 Pattern(iValue1,iValue2); 
 return 0; 
} 