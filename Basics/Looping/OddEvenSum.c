#include <stdio.h>

void main(){
    int n,sum=0, even=0, odd=0;
    printf("Enter:");
    scanf("%d", &n);

    // sum of odd & sum of even for n numbers

    for (int i = 1; i<=n; i++){
        (i%2==0) ? (even+=i) : (odd+=i);
        sum+=i; 
    }
    printf("Sum : %d \nEven Sum : %d\nOdd Sum : %d", sum, even, odd);

}