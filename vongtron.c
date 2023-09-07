#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[52];
	for(int i=0;i<52;i++)
	{
		scanf("%c",&a[i]);
	}
	int giao=0;
	for(int i=0;i<52;i++)
	{
		for(int j=i+1;j<52;j++)
		{
			if(a[i]==a[j])
			{
				for(int k=i+1;k<j;k++)
				{
					int dem=0;
					for(int h=i+1;h<j;h++)
					{
						if(a[h]==a[k]) dem++;
					}
					if(dem==1) giao++;
				}
			}
		}
	}
	printf("%d",giao/2);
}