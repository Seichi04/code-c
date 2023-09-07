#include<stdio.h>
int main()
{
	int n; scanf("%d",&n);
	printf("*\n");
	for(int i=1;i<n-1;i++)
	{
				printf("*");
				for(int k=1;k<=i-1;k++) printf(".");
				printf("*\n");
		
	}
	for(int m=0;m<n;m++)printf("*");
}