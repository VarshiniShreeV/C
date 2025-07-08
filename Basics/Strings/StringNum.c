#include <stdio.h>

int main()
{
	char n[100]="abc2de3";
	char newstr[100]="";
	int len1=0;
	int i=0;
	while(n[i]!='\0') //i=0
	{
		
		char substr[100]="";
		int k=0;
		while(n[i]>='a'&& n[i]<='z')//0
		{
		    substr[k++]=n[i];
		    i++;
		}
		int num=0;
		while(n[i]>='0'&&n[i]<='9') {
            printf("%d ",n[i]);
			num=num*10+(n[i]-'0');
			i++;
		}
        printf("\n%d  ",num);
		for(int i=0; i<num; i++) {
//	    newstr[len1++]=c;
			printf("%s",substr);
		}
	}
	printf("%s",newstr);
}