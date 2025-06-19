#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, max, min,mid1,mid2;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    max = (n1>n2 && n1>n3 && n1>n4) ? n1 : ((n2>n1 && n2>n3 && n2>n4) ? n2 : ((n3>n1 && n3>n2 && n3>n4) ? n3 : n4));
    min = (n1<n2 && n1<n3 && n1<n4) ? n1 : ((n2<n1 && n2<n3 && n2<n4) ? n2 : ((n3<n1 && n3<n2 && n3<n4) ? n3 : n4));

    mid1 = ((n1==max || n2==max || n3==max) && (n1==min || n2==min || n3==min) ? (n1+n2+n3-min-max) : ((n2==max || n3==max || n4==max) && (n2==min || n3==min || n4==min) ? (n2+n3+n4-min-max) : ((n1==max || n3==max || n4==max) && (n1==min || n3==min || n4==min) ? (n1+n3+n4-min-max): 0))) ;
    mid2 = n1+n2+n3+n4 - min-max-mid1;
    
    printf("%d %d %d %d", min, (mid1>mid2 ? mid2:mid1), (mid1>mid2 ? mid1:mid2), max);
}