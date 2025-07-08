//DOUBLY Circular Linked List

#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
  struct node *prev;
};

struct node* createNode(int n){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = n;
    new->next=NULL;
    new->prev=NULL;
    return new;
}

void print(struct node *temp, struct node *first){
    if (temp==NULL) printf("Empty Linked List");
    while(temp!=NULL && temp->next!=first){
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
}

void create(){
    int n;
    scanf("%d",&n);
    struct node *first=NULL, *last=NULL, *prev=NULL;
    while(n!=-1){
        struct node *temp = createNode(n);
        if (first==NULL){
            first = last = temp;
            prev = NULL;
        }
        else{
            temp->prev = last;
            last->next = temp;
            last = temp;
            last->next=first;
            first->prev=last;
        }
        scanf("%d",&n);
    }
    print(first, first);
}

void main(){
    create();
}