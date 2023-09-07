#include<stdio.h> 
int main()
{ 
	int r,c; scanf("%d%d",&r,&c); 
	int i,j,k; 
	for(i=1;i<=r;i++)
	{ 
		for(j=i;j<=c;j++)
		{ 
			printf("%d",j); 
		} 
		if(i>c)
		{ 
			for(j=i;j>i-c;j--)
			{
				printf("%d",j);
			}
		}
		else
		{ 
			for(j=c-1;j>c-i;j--)
			{
				printf("%d",j);
			}
		} 
		printf("\n"); 
	} 
}