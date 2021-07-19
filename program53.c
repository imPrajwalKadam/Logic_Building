//Accept N numbers from user and display Even numbers of that numbers
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength,int iValue)
{
 int iCnt=0,i=0;
 
 
  for(i=0;i<iLength;i++)
    {
       if(Arr[i]==iValue)
       {
      iCnt++;
    }
  }
  return iCnt;
}

int main()
{
      int *arr=NULL;
      int iSize=0,i=0,iRet=0,iNo=0;
      printf("Enter Number of Elements\n");
      scanf("%d",&iSize);
      printf("Enter the Elements that you want to search\n");
      scanf("%d",&iNo);
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
      iRet=Frequency(arr,iSize,iNo);
      printf("Total Frequency is:%d\n",iRet);

      free(arr);
      return 0;
}