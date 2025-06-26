#include <stdio.h>
#include <string.h>


void main(){
    char s[100];
    scanf(" %[^\n]",s);
    int size;
    for (size=0;s[size];size++);

    for (int i=0;i<size;i++){

        if (s[i]=='1') continue;

        int c=1;

        for (int j=i+1;j<size;j++){
            if (i!=j && s[i]==s[j]){
                c++;
                s[j]='1';
            }
        }

        printf("Character : %c Occurence : %d\n",s[i],c);
        s[i]='1'; //visited
    }
    
}