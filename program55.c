//Accept N numbers from user and display Even numbers of that numbers
#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iLength)
{
 int i=0;
 
 
  for(i=iLength-1;i>=0;i--)
    {
       if(Arr[i]==iLength)
       {
          break;
       }
    }
       return i;
  }


int main()
{
      int *arr=NULL;
      int iSize=0,i=0,iRet=0;
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
      iRet=Maximum(arr,iSize,iNo);
      if(iRet==-1)
      {
        printf("their is no number\n");
      }else{
      printf("Last Occerence is:%d\n",iRet);
      }
      free(arr);
      return 0;
}