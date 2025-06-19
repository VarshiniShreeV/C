//14.06.2025

// To verify valid time

#include <stdio.h>

int main()
{
    int h,m,s;
    printf("Enter Time to verify: ");
    scanf("%d:%d:%d",&h,&m,&s);
    if ((h>=0)&&(h<=23)){
        if ((m>=0)&&(m<=59)){
            if ((s>=0)&&(s<=59)){
                printf("Valid time %d:%d:%d",h,m,s);
            }
            else{
                printf("Invalid second : Range(0-59) %d",m);
            }
        }
        else{
                printf("Invalid minute : Range(0-59) %d",m);
            }
    }
    else{
                printf("Invalid hour : Range(0-23) %d",h);
            }
}