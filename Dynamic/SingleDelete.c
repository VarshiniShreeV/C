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

void deleteFirst(){
    head = head->next;
}

void deleteMiddle(int p){
    struct node *temp = head;
    for (int i=1;i<p-1;i++){
        temp=temp->next;
    }
    temp->next = temp->next->next;
}

void deleteLast(){
    struct node *temp = head;
    for (int i=0;i<count-1;i++){
        temp=temp->next;
    }
    temp->next=NULL;
}

int main(){
    int n, input;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&input);
        create(input);
    }
    //deleteFirst();
    //deleteMiddle(2);
    deleteLast();
    print();
    return 0;
}