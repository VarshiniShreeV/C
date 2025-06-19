#include <stdio.h>

//Check whether the given character is an alphabet

void main(){
    char letter;
    scanf("%c", &letter);
    int ascii = letter;
    if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)) printf("Alphabet");
    else printf("Not an alphabet");
    //(ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122) ? printf("Alphabet") : printf("Not an alphabet");
}