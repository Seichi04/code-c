#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[101];
	char b[101];
	gets(a);
	gets(b);
	int n=strlen(a);
	int m=strlen(b);
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[0])
		{
			int check=0;
			for(int j=0;j<m;j++)
			{
				if(a[j+i]!=b[j]) 
				{
					check++;
					break;
				}
			}
			if(check==0) i+=m;
		}
		printf("%c",a[i]);
	}
}