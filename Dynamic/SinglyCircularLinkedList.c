#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node* createNode(int n){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = n;
    new->next=NULL;
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

struct node* create(int n){
    int input;
    struct node *first=NULL, *last=NULL;
    for (int i=0;i<n;i++){
        scanf("%d",&input);
        struct node *temp = createNode(input);
        if (first==NULL){
            first = last = temp;
        }
        else{
            last->next = temp;
            last = temp;
            last->next=first;
        }
    }
    return first;
}

void main(){
    int n,p;
    struct node *list=NULL;
    printf("Number of Nodes:");
    scanf("%d",&n);
    printf("Values:");
    list = create(n);
    printf("Times to display:");
    scanf("%d",&p);
    for (int i=0;i<p;i++) print(list,list);
    
}