#include <stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
  struct node *prev;
};

int n;
int count=0;
struct node *head=NULL, *prev=NULL;

void printList()
{
    struct node* temp=head;
    if(temp==NULL)
    printf("Empty");
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

struct node* createNode(int val)
{
    struct node* newnode=(struct node*)malloc (sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

void pop()
{
    if(count==0)
    printf("Underflow\n");
   else
   {
       if(count==1) head = NULL;
       else
       {
           struct node *temp=head;
           while(temp->next->next!=NULL) temp=temp->next;
           temp->next=NULL;
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
        if(head==NULL) head=newnode;
    else
    {
        struct node *temp=head;
        while(temp->next!=NULL) temp=temp->next;
        newnode->prev = temp;
        temp->next = newnode;
    }
    }
    else printf("Overflow\n");
}

void isEmpty()
{
    int space=n-count;
    if(space==0)
    printf("Stack is Full\n");
    else
    printf("Available Space: %d\n",space);
}

void reversePrint(){
    struct node *temp = head;
    if(temp==NULL)
    printf("Empty");
    else
    {
        while(temp->next!=NULL) temp=temp->next;
        struct node* temp=head;
        struct node *last = temp;
        while(last!=head,printf("\n")) {printf("%d ",last->data);last=last->prev;}
        printf("%d",last->data);
    }
    
}

int main()
{
    printf("Enter stack capacity: ");
    scanf("%d",&n);
    int caseno,val;
    while(1)
    {
        printf("Enter 1.Push 2.Pop 3.Print 4.Reverse Print 5.Modify Size 6.FreeSpace 7.Exit : ");
        scanf("%d",&caseno);
        switch(caseno)
        {
            case 1:printf("Enter Value: ");
            scanf("%d",&val);
            push(val);
            break;
            
            case 2:pop();break;
            case 3:printList();break;
            case 4: reversePrint();break;
            case 5:printf("Enter new stack size: ");
                   int size;
                   scanf("%d",&size);
                   n=n+size;
                   break;
            case 6: isEmpty();
            break;
            case 7:return 0;
        }
    }
}
