#include <stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
};
int n;
int count=0;
struct node* head=NULL;
void printList()
{
    struct node* temp=head;
    if(temp==NULL)
    printf("Stack is empty");
    else
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
struct node* createNode(int a)
{
    struct node* newnode=(struct node*)malloc (sizeof(struct node));
    newnode->data=a;
    newnode->next=NULL;
    return newnode;
}
void pop()
{
    if(count==0)
    printf("Underflow\n");
   else
   {
       if(count==1)
       {
           head=NULL;
       }
       else
       {
           struct node* last=head;
           while(last->next->next!=NULL)
           last=last->next;
           
           last->next=NULL;
       }
       count--;
   }
}
void push(int val)
{
    if(count<n)
    {
        count++;
    struct node* newnode=createNode(val);
    if(head==NULL)
     head=newnode;
    else
    {
        struct node* last=head;
        while(last->next!=NULL)
         last=last->next;
         
        last->next=newnode;
    }
    }
    else
      printf("Overflow\n");
}
void isEmpty()
{
    int space=n-count;
    if(space==0)
    printf("Stack is Full\n");
    else
    printf("Available Space: %d\n",space);
}
int main()
{
    printf("Enter stack capacity: ");
    scanf("%d",&n);
    int caseno,val;
    while(1)
    {
        printf("Enter 1.Push 2.Pop 3.Print 4.Modify Size 5.FreeSpace 6.Exit");
        scanf("%d",&caseno);
        switch(caseno)
        {
            case 1:printf("Enter Value: ");
            scanf("%d",&val);
            push(val);
            break;
            
            case 2:pop();break;
            case 3:printList();break;
            case 4:printf("Enter new stack size: ");
                   int size;
                   scanf("%d",&size);
                   n=n+size;
                   break;
            case 5: isEmpty();
            break;
            case 6:return 0;
        }
    }
}
