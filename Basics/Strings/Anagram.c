#include <stdio.h>
#include <string.h>

void main(){
    char s1[100],s2[100];
    scanf("%[^\n]",s1);
    scanf(" %[^\n]",s2);

    int size1,size2,flag;
    for (size1=0;s1[size1];size1++);
    for (size2=0;s2[size2];size2++);

    if (size1!=size2) printf("\nNot an anagram");

    for (int i=0;i<size1;i++){
        if (s1[i]=='1') break;
        for (int j=0;j<size2;j++){
            if (s2[j]=='1') break;
            if (s1[i]==s2[j]){
                s1[i]='1';
                s2[j]='1';
                flag=1;
            }
            else flag=0;
        }
        if (flag==0) break;
        printf("\n%s %s",s1,s2);
    }
    printf("\n%s %s",s1,s2);
    printf("%d",s1==s2);
    if (flag==1) printf("yes");
    else printf("No");
    

}