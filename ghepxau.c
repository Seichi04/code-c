#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int n=0;scanf("%d",&n);
		char a[n][51];
		for(int i=0;i<n;i++)
		{
			scanf("%s",a[i]);
		}
		for(int i=0;i<n;i++)
		{
			int min=i;
			{
				for(int j=i+1;j<n;j++)
				{
					if(a[j][0]<a[min][0]) min=j;
				}
				if(min!=i)
				{
					char temp[51];
					strcpy(temp,a[i]);
					strcpy(a[i],a[min]);
					strcpy(a[min],temp);
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			printf("%s",a[i]);
		}
		printf("\n");
	}
	
}