#include<stdio.h>
#include<math.h>
int checknguyento(int a)
{
	int dem=0;
	if(a==1) return 0;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			dem++;
			break;
		}
	}
	if(dem==0) return 1;
	else return 0;
}
int main()
{
	int m=0;scanf("%d",&m);
	for(int k=0;k<m;k++)
	{
		int n=0;scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Test %d:\n",k+1);
		for(int i=0;i<n;i++)
		{
			int min=i;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<a[min]) (min=j);
			}
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
		for(int i=0;i<n;i++)
		{
			int dem=0;
			if(checknguyento(a[i])==0) continue;
			for(int j=0;j<n;j++)
			{
				if(a[i]==a[j] && j<i ) break;
				if(a[i]==a[j]) dem++;
			}
			if(dem>0)	printf("%d xuat hien %d lan\n",a[i],dem);
		}
	}
	
}