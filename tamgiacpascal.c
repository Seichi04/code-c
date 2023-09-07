#include<stdio.h>
int tinh(int a)
{
	if(a==0) return 1;
	else return a*tinh(a-1);
}
int main()
{
	int n=0;scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%d ",tinh(i)/(tinh(j)*tinh(i-j)));
		}
		printf("\n");
	}
}