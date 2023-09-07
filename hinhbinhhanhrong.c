#include<stdio.h>
void line(int n)
{
	for(int k=0;k<n;k++) printf("*");
	printf("\n");
}
int main()
{
	int n; scanf("%d",&n);
	for(int j=0;j<n-1;j++) printf("~");
	line(n);
	for(int i=1;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++) printf("~");
		printf("*");
		for(int h=1;h<n-1;h++) printf(".");
		printf("*\n");
	}
	line(n);
}