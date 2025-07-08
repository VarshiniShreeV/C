#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    int arr[n+1],key,pos;

    for (int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    printf("\nINSERTION\n");
    printf("Enter the value to be inserted:");
    scanf(" %d",&key);
    printf("\nEnter the position where it need to be inserted:");
    scanf(" %d",&pos);

    for (int i=pos;i<=n;i++) {
        printf("I:%d",i);
        arr[i]=arr[i-1];
    }
    arr[pos] = key; 
    for (int i=0;i<n+1;i++) printf("%d ",arr[i]);
}