//Accept N numbers from user and display Even numbers of that numbers
#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[],int iLength)
{
 int i=0,iMin=0;
if(Arr==NULL)
 {
   return -1; 
 }
 iMin=Arr[0];
 
  for(i=0;i<iLength;i++)
    {
       if(Arr[i]<iMin)
       {
          iMin=Arr[i];
       }
    }
       return iMin;
  }


int main()
{
      int *arr=NULL;
      int iSize=0,i=0,iRet=0;
      printf("Enter Number of Elements\n");
      scanf("%d",&iSize);
      arr=(int*)malloc(iSize*sizeof(int));
      if(arr==NULL)
      {
        printf("Unable allocate the memory\n");
        return -1;
      }

      printf("Enter The Elements\n");
      for(i=0;i<iSize;i++)
      {
        scanf("%d",&arr[i]);
      }
      iRet=Minimum(arr,iSize);
      printf("Smllest number is:%d\n",iRet);
      free(arr);
      return 0;
}