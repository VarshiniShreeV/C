#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

struct node* createNode(int n){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = n;
    new->left = NULL;
    new->right = NULL;

    return new;
}

void insert(int n){
    //struct node *new = createNode(n);
    if (root==NULL) root = createNode(n);
    else{
        struct node *temp = root;
        while(1){
            if (temp->data > n){
                if (temp->left == NULL){
                    temp->left = createNode(n);
                    return;
                }
                else temp = temp->left;
            }
            else{
                if (temp->right == NULL){
                    temp->right = createNode(n);
                    return;
                }
                else temp=temp->right;
            }
        }
    }
}

void inorder(struct node *temp){
    if (temp == NULL) return;
    inorder(temp->left);
    printf("%d ",temp->data);
    inorder(temp->right);
}

void postorder(struct node *temp){
    if (temp==NULL) return;
    postorder(temp->left);
    postorder(temp->right);
    printf("%d ",temp->data);
}

void preorder(struct node *temp){
    if (temp==NULL) return;
    printf("%d ",temp->data);
    preorder(temp->left);
    preorder(temp->right);
}

void print(){
    preorder(root);
}

void main(){
    insert(13);
    insert(10);
    insert(9);
    insert(11);
    insert(15);
    insert(18);
    insert(12);
    insert(14);
    print();
}