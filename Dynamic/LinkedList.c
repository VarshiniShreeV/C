#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void print(struct node* temp){
    if (temp==NULL) printf("List is Empty!");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void create(){
    int n;
    scanf("%d",&n);
    struct node *first = NULL, *last = NULL;
    
    while(n!=-1){
        struct node *new = (struct node*)malloc(sizeof(struct node));
        new->data = n;
        new->next=NULL;
        if (first==NULL){
            first = new;
            last = new;
        }
        else{
            last->next = new;
            last = new;
        }
        scanf("%d",&n);
    }
    print(first);
}

int main(){
    create();
    return 0;
}
