#include<stdio.h> 
int main()
{ 
	int r,c; scanf("%d%d",&r,&c); 
	int i,j,k; 
	for(i=1;i<=r;i++)
	{ 
		for(j=i;j<=c;j++)
		{ 
			printf("%c",j+64); 
		} 
		if(i>c)
		{ 
			printf("%c",c+64); 
			for(j=(c-1);j>0;j--)
			{ 
				printf("%c",j+64); 
			} 
		}
		else
		{ 
			for(j=(i-1);j>0;j--)
			{ 
				printf("%c",j+64); 
			} 
		} 
		printf("\n"); 
	} 
}