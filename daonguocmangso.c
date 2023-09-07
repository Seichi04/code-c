#include<stdio.h>
int main()
{
	int h=0;scanf("%d",&h);
	int a[h];
	for(int i=0;i<h;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=h-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
		
}