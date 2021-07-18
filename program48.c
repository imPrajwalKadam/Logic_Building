 //Accept N numbers from user and display that numbers

#include<stdio.h>
#include<stdlib.h>

  void Display(int Arr[],int iSize)  //Step6
  {
    int i=0;
    printf("Elements from the array are:\n");
    for(i=0;i<iSize;i++)
    {
      printf("%d\n",Arr[i]);
    }
}
int main()
{

  int *arr=NULL;  //Step 1
  int iLength=0,i=0;
  printf("Enter the number of Elements\n");  //Step2
  scanf("%d",&iLength);     
               
  arr=(int*)malloc(iLength*sizeof(int));   //Step3

  printf("Enter the Elements\n");      //Step4
  for(i=0;i<iLength;i++)
  {
    scanf("%d",&arr[i]);
  }
  Display(arr,iLength);   //Step5

 
  free(arr);            //Step7
return 0;
}
