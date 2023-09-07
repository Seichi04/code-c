#include<stdio.h>
int main()
{
	int n; scanf("%d",&n);
	int a[n][n];
	int h=n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<h;j++)
		{
			printf("%c",'@'+(n-1)-(i-j));
		}
		h--;
		printf("\n");
	}
}