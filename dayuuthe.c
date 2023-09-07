#include<stdio.h>
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		long a[200];
		int i=0;
		char dk=' ';
		int c=0,l=0;
		while(dk!='\n')
		{
			scanf("%ld",&a[i]);
			if(a[i]%2==0) c++;
			else l++;
			i++;
			dk=getchar();
		}
		if((i%2==0 && c>l) || (i%2!=0 && l>c)) printf("YES\n");
		else printf("NO\n");
	}
	
	
	
}