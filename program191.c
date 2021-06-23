/*
 Accept Link List From User and return the Middle element from that link list

 Input:  11 21 51 101 111

 OutPut:51
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;
void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    if(*Head != NULL)
    {
        newn->next = *Head;
    }
    *Head = newn;
}
void Dissplay(PNODE Head)
{
    while(Head)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
    printf("\n");
}
int MiddleElement(PNODE Head)
{
  PNODE temp = NULL;
  if(Head==NULL)
      return-1;

  temp = Head->next;
  while((temp != NULL)&&(temp->next != NULL))
  {
      temp = temp->next->next;
      Head = Head->next;
  }
  return (Head->data);

  /*
    PNODE temp1 = Head;
    PNODE temp2 = Head;

    if(Head!=NULL)
    {
      while(temp2 != NULL && temp2->next!=NULL)
      {
        temp2 = temp2->next->next;
        temp1 = temp1->next;
      }
    }
    return (temp1->data);*/
}
int main()
{
    int ret = 0;
    PNODE First = NULL;
    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    Dissplay(First);
    ret = MiddleElement(First);
    
    printf("Middle elements is : %d",ret);
    return 0;
}
