#include<stdio.h>
#include<string.h>
int main()
{
	int t=0;scanf("%d",&t);
	getchar();
	for(int k=0;k<t;k++)
	{
		char a[1001];
		gets(a);
		int n=strlen(a);
		for(int i=0;i<n;i++)
		{
			if((int)a[i]<48 || (int)a[i]>57 || (int)a[0]==48)
			{
				printf("INVALID\n");
				goto next;
			}
		}
		for(int h=48;h<58;h++)
		{
			int check=0;
			for(int i=0;i<n;i++)
			{
				if(h==(int)a[i]) 
				{
					check++;
					break;
				}
			}
			if(check==0)
			{
				printf("NO\n");
				goto next;
			}
		}
		printf("YES\n");
		next: continue;
	}
	
}