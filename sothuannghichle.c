#include<stdio.h> 
#include<math.h> 
#include<stdlib.h>
#include<string.h>
int main()
{
	int t=0;scanf("%d",&t);
	getchar();
	for(int k=0;k<t;k++)
	{
		char a[20];
		gets(a);
		int n=strlen(a);
		if( n%2==0 )
		{
			printf("NO\n");
			goto next;
		}
		int tong=0;
		for(int i=0;i<n;i++)
		{
			if( ((int)a[i]-48)%2==0 )
			{
				printf("NO\n");
				goto next;
			}
		}
		char b[20];
		for(int i=0;i<n;i++)
		{
			b[i]=a[n-1-i];
		}
		if(strcmp(a,b)==0) printf("YES\n");
		else printf("NO\n");
		next: continue;
	}
}