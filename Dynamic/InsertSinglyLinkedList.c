#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;
int count=0;

struct node* createNode(int n){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = n;
    new->next = NULL;
    count++;
    return new;
}

void create(int n){
    struct node *new = createNode(n);
    if (head==NULL){
        head=tail=new;
    }
    else{
        tail->next=new;
        tail=new;
    }
}

void print(){
    if (head==NULL) {printf("Empty list");return;}
    struct node *temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void insertFirst(int n){
    struct node *new = createNode(n);
    new->next = head;
    head = new;
}

void insertMiddle(int n, int p){
    struct node *new = createNode(n);
    struct node *temp = head;
    for (int i=1;i<p-1;i++){
        temp=temp->next;
    }
    new->next = temp->next;
    temp->next = new;
}

void insertLast(int n){
    struct node *new = createNode(n);
    struct node *temp = head;
    for (int i=1;i<count-1;i++){
        temp=temp->next;
    }
    temp->next=new;
}

int main(){
    int n, input;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&input);
        create(input);
    }
    //insertFirst(0);
    insertMiddle(0,2);
    //insertLast(0);
    print();
    return 0;
}