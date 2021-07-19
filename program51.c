//Accept N numbers from user and display Even numbers of that numbers
#include<stdio.h>
#include<stdlib.h>
int DisplayEven(int Arr[],int iLength)
{
 int i=0,iSum;
  
  for(i=0;i<iLength;i++)
  {
    if((Arr[i]%2)==0)
    {
      iSum=iSum+Arr[i];
    }
  }
  return iSum;
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
      iRet=DisplayEven(arr,iSize);
      printf("Summetion of even number is:%d\n",iRet);
      free(arr);
      return 0;
}