  //Accept N numbers from user and display Addition numbers of that numbers
#include<stdio.h>
#include<stdlib.h>
int iSumElements(int Arr[],int iLength)
{
  int iSum=0,i=0;
  for(i=0;i<iLength;i++)
  {
    iSum=iSum+Arr[i];
  }
  return iSum;
}
int main()
{
int *arr=NULL;
int i=0,iSize=0,iRet=0;

printf("Enter Number Of elements\n");
scanf("%d\n",&iSize);

arr=(int*)malloc(iSize * sizeof(int));
printf("Enter the elements\n");
for(i=0;i<iSize;i++)
{
  scanf("%d",&arr[i]);
}
iRet=iSumElements(arr,iSize);
printf("Summetion of all Elements:%d\n",iRet);
free(arr);
return 0;
}