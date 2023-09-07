#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void xoay(char a[51])
{
	int n=strlen(a);
	char temp=a[0];
	for(int i=0;i<n;i++)
	{
		a[i]=a[i+1];
		if(i==n-1) a[i]=temp;
	}
}
int main()
{
	int n=0;scanf("%d",&n);
	char a[n][51];
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	int min=1000;
	int m=strlen(a[0]);
	for(int k=0;k<m;k++)
	{
		int dem=0;
		for(int i=1;i<n;i++)
		{
			char b[51];
			strcpy(b,a[i]);
			int demx=0;
			while(strcmp(a[0],b)!=0 && demx<=strlen(b)-1)
			{
				xoay(b);
				demx++;
				dem++;
			}
			if(demx==strlen(b))
			{
				printf("-1");
				return 0;
			}
		}
		if(dem+k<min) min=dem+k;
		xoay(a[0]);
	}
	printf("%d",min);
	return 0;
}