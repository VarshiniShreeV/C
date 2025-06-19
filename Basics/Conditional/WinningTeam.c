//13.06.2025

// To determine winning team

#include <stdio.h>

int main()
{
	int a=10,b=9,c=80,d=70;
	if(a>b)
	{
	   printf("A is greater B\n");
	   if(a>c)
	   {
	        printf("A is greater C\n");
	        if(a>d)
	            printf("A defeated D and WInner\n");
	        else 
	         printf("D defeated A  and Winner\n");
	   }
	   else
	    printf("A got defeated by C\n");
	}
	else
	    printf("A got defeated by B\n");
	
	return 0;
}