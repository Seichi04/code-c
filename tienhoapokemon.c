#include<stdio.h>
struct poke
{
	char name[50];
	int k;
	int m;
	int dem;
};
void evol(struct poke *a)
{
	while((a->m)/(a->k)>0)
	{
		int x=(a->m)/(a->k);
		int y=(a->m)%(a->k);
		a->dem+=x;
		a->m=y+x*2;
	}
}
int main()
{
	int n=0;scanf("%d",&n);
	getchar();
	struct poke a[n];
	for(int i=0;i<n;i++)
	{
		gets(a[i].name);
		scanf("%d %d",&a[i].k,&a[i].m);
		getchar();
		a[i].dem=0;
	}
	int tong=0;
	int max=0;
	for(int i=0;i<n;i++)
	{
		evol(&a[i]);
		tong+=a[i].dem;
		if(a[i].dem>max) max=a[i].dem;
	}
	printf("%d\n",tong);
	for(int i=0;i<n;i++)
	{
		if(a[i].dem==max) puts(a[i].name);
	}
	
}