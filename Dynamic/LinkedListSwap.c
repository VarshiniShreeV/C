#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *head = NULL, *tail = NULL;

struct node* createNode(int n){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->next = NULL;

    return temp;
}

void create(int n){
    struct node *new = createNode(n);
    if (head == NULL) head = tail = new;
    else{
        tail->next = new;
        tail=new;
    }
}

void print(){
    struct node *temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void swap(){
    int t;
    struct node *temp = head->next;
    while(temp!=NULL && temp->next!=NULL){
        t = temp->data;
        temp->data = temp->next->data;
        temp->next->data = t;
        temp = temp->next->next;
    }
}

int main(){
    int n, input;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&input);
        create(input);
    }
    print();
    swap();
    print();

    return 0;
}