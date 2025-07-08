#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void createNode(){
    struct node *first=NULL, *last=NULL;

    int n;
    scanf("%d",&n);
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new -> data = n;
    new -> next = NULL;
    if (first==NULL){
        first = new;
        last = new;
    }
    else{
        last -> next = new;
        last = new;
    }
}

void main(){
    int num;
    scanf("%d",&num);
    struct node *first = NULL, *last = NULL;
    for (int i=1;i<=num;i++) 
    /*
    {
        int n;
        scanf("%d",&n);

        struct node *new = (struct node*)malloc(sizeof(struct node));
        new -> data = n;
        new -> next = NULL;
        if (first==NULL){
            first = new;
            last = new;
        }
        else{
            last -> next = new;
            last = new;
        }
    }
    */
    createNode();
    /*
    PRINT
    for (int )
    */
}