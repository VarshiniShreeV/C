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

void print(struct node *temp){
    if (temp==NULL) printf("Empty Linked List");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->prev;
    }
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
        }
        scanf("%d",&n);
    }
    print(last);
}

void main(){
    create();
}