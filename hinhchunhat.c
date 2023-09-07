#include<stdio.h>
int main()
{
	int r,c; scanf("%d %d",&r,&c);
	for(int i=0;i<r;i++) printf("*");
	printf("\n");
	for(int i=1;i<c-1;i++)
	{
		printf("*");
		for(int j=1;j<r-1;j++) printf(" ");
		printf("*\n");
	}
	for(int i=0;i<r;i++) printf("*");
}