#include <stdio.h>

int top=0;
int a[100];
int count = 2;

void push(int n){
    if (top>=count){
        printf("Stack Overflow!");
    }
    else{
    a[top]=n;
    top++;
    }
}

void pop(){
    if (top==0){
        printf("Stack Underflow!");
    }
    else{
        top--;
    }
}

void print(){
    for (int i=0;i<top;i++) printf("%d",a[i]);
}

void main(){
    int n;
    scanf("%d",&n);
    while(n!=-1){
        push(n);
        scanf("%d",&n);
    }
    print();
    pop();
    print();
}
