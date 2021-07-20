//Accept N numbers from user and display all such numbers which contains 3 digits in it. 
#include<stdio.h>
#include<stdlib.h>
void Digit(int Arr[],int iLength)
{
  int i=0,iCnt=0,iNo=0;
  
  for(i=0;i<iLength;i++)
  {
    iNo=Arr[i];
    while(iNo>0)
   {
  iNo=iNo/10;
  iCnt++;
    }
    if(iCnt==3)
    {
      printf("%d\t",Arr[i]);
    }
   iCnt=0;
  }
}

int main()
{
  int *arr=NULL;
  int iCnt=0,iSize=0;

  printf("Enter Number of elements:");
  scanf("%d",&iSize);


  arr=(int*)malloc(iSize*sizeof(int));
printf("Enter  Elements:\n");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
  scanf("%d",&arr[iCnt]);
  }
  Digit(arr,iSize);
  free(arr);
  return 0;

}