/* Return the obtained inputs (3) in descending order */

#include <stdio.h>

int main()
{
    int n1,n2,n3, max, min;
    scanf("%d %d %d", &n1, &n2, &n3);
    
    max = (n1>n2 && n1>n3) ? n1 : ((n2>n1 && n2>n3) ? n2 : n3);
    min = (n1<n2 && n1<n3) ? n1 : ((n2<n1 && n2<n3) ? n2 : n3);
    
    printf("%d %d %d", min, (n1+n2+n3) - (min+max), max);
}