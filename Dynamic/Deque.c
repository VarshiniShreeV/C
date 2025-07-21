#include <stdio.h>
#include <stdlib.h>

int *arr;

int f=-1, r=-1;

void enqueueFront(int v, int s){
    if ((f==0 && r==s-1)||(f == (r+1)%s)) printf("Full!");
    else if (f==-1 && r==-1){
        f=r=0;
        arr[f] = v;
    }
    else{
        if (f==0){
            f=s-1;
            arr[f] = v;
        }
        else{
            f--;
            arr[f] = v;
        }
    }
}

void enqueueRear(int v, int s){
    if ((f==0 && r==s-1)||(f == (r+1)%s)) printf("Full!");
    else if (f==-1 && r==-1){
        f=r=0;
        arr[r] = v;
    }
    else{
        if (r==s-1){
            r=0;
            arr[r] = v;
        }
        else{
            r++;
            arr[r] = v;
        }
    }
}

void dequeueFront(int s){
    if (f==-1 && r==-1) printf("Empty!");
    else if (f==r) f=r=-1;
    else{
        if (f == s-1) f = 0;
        else{
            f++;
        }
    }
}

void dequeueRear(int s){
    if (f==-1 && r==-1) printf("Empty!");
    else if (f==r) f=r=-1;
    else{
        if (r==0) r=s-1;
        else{
            r--;
        }
    }
}

void getFront(){
    printf("%d ",arr[f]);
}

void getRear(){
    printf("%d ",arr[r]);
}

void display(int s){
    if (f==-1 && r==-1) printf("Empty!");
    else{
        int i=f;
        while(i!=(r%s)){
            printf("%d ",arr[i]);
            i = (i+1)%s;
        }
        printf("%d",arr[r]);
    }
}



int main(){
    int n;
    scanf("%d",&n);
    arr = (int *)malloc(n*sizeof(int));
    
    while(1){
        int op;
        int input;
        printf("\n##### DEQUE OPERATION #####\n");
        printf("1. INSERT AT FRONT\n2. INSERT AT BACK\n3. REMOVE FROM FRONT\n4. REMOVE FROM BACK\n5. VALUE AT FRONT\n6. VALUE AT REAR\n7. DISPLAY\n8. EXIT");
        printf("\nEnter:");
        scanf("%d",&op);
        switch(op){
            case 1: 
                printf("\nEnter Value:");
                scanf("%d",&input);
                enqueueFront(input, n);
                break;
            case 2:
                printf("\nEnter Value:");
                scanf("%d",&input);
                enqueueRear(input, n);
                break;
            case 3:
                dequeueFront(n);
                break;
            case 4:
                dequeueRear(n);
                break;
            case 5:
                getFront();
                break;
            case 6:
                getRear();
                break;
            case 7:
                display(n);
                break;
            case 8:
                free(arr);
                return 0;
        }
    }
}