#include <stdio.h>
#include <string.h>

void main(){
    char s1[100]="I like program";
    char s2[100]="program";
    int i=0,j=0,flag=0;

    for (int i=0;s1[i];)
    if (s1[i]!=s2[j]){
        printf("\n%c %c",s1[i],s2[j]);
        i++;
    }
    else flag=1;
    (flag==1) ? printf("Yes"):printf("No");

}