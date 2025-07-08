#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *createNode(int n){
        struct node *temp = (struct node*)(malloc(sizeof(struct node)));
        temp -> data = n;
        temp -> next = NULL;
        return temp;
}

void print(struct node *first){
    while(first!=NULL) {
        printf("%d",first->data);
        first = first->next;
    }
}

struct node* create(){
    int n;
    scanf("%d",&n);
    
    struct node *first = NULL, *last=NULL;
    
    while (n!=-1){
        struct node *temp = createNode(n);
        if (first==NULL){
            first = temp;
            last = temp;
        }
        else{
            last -> next = temp;
            last = temp;
        }
        scanf("%d",&n);
    }
    return (first);
}

void main(){
    int n;
    scanf("%d",&n);
    struct node * list[n];
    for (int i=0;i<n;i++){
        list[i] = create();
    }
    for (int i=0;i<n;i++,printf("\n")){
        print(list[i]);
    }
}