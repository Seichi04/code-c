#include<stdio.h>
void line(int n)
{
	for(int k=0;k<n;k++) printf("*");
	printf("\n");
}
int main()
{
	int h,c; scanf("%d %d",&h,&c);
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<i;j++) printf("~");
		if(i==0) line(c);
		else if (i==h-1)
		{
			line(c);
		}
		else 
		{
			printf("*");
			for(int k=1;k<c-1;k++) printf(".");
			printf("*\n");
		}
	}
}