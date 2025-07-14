#include <stdio.h>

int top=0;
int a[100];
int count = 2;

void enqueue(int n){
    if (top>=count){
        printf("Queue Overflow!");
    }
    else{
    a[top]=n;
    top++;
    }
}

void dequeue(){
    if (top==0){
        printf("Queue Underflow!");
    }
    else{
        for(int i=1;i<top;i++){
            a[i-1]=a[i];
        }
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
        enqueue(n);
        scanf("%d",&n);
    }
    print();
    dequeue();
    print();
}
