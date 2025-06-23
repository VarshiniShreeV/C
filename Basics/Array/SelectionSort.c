#include <stdio.h>
void printArray(int *a,int n)//int a[]
{
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);

}
int main()
{
	int n=10;
	int a[]= {4,1,3,1,5,4,2,1,2,3};
	int count=1;
	for(int i=0; i<n; i++)
	{
		if(a[i]==-1)
			continue;

		count=1;
		for(int j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				count++;
				a[j]=-1;
			}
		}
		printf("%d\n",a[i]);

	}

}
