#include<stdio.h>
int main()
{
	int n; scanf("%d",&n);
	int h=n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<h;j++)
		{
			printf("%c",'A'+(i+j)*2);
		}
		h--;
		printf("\n");
	}
}