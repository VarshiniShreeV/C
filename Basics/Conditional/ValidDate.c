//14.06.2025

// To verify valid date

#include <stdio.h>

int main()
{
 int d,m,y;
 scanf("%d/%d/%d", &d, &m, &y);
 if(y>1900 && y<3000)
 {
     if(m>=1 && m<=12)
     {
         if((d>=1 && d<=31)&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))
            printf("valid");
         else if((d>=1 && d<=30)&&(m==4||m==6||m==9||m==11))
            printf("valid");
         else if((d>=1 && d<=28)&& m==2)
            printf("valid");
         else if(d==29 && m==2 && (y%4==0&&y%100!=0 || y%400==0))
            printf("valid");
         else
            printf("Invalid");
     }
     else
        printf("Invalid");
 }
 else
    printf("Invalid");
 
}
