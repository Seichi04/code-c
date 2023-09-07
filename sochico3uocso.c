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
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		long long L,R;scanf("%lld %lld",&L,&R);
		long long l,r;
		((long long)sqrt(L)*(long long)sqrt(L)<L)?(l=(long long)sqrt(L)+1):(l=(long long)sqrt(L));
		r=(long long)sqrt(R)+1;
		int dem=0;
		for(int i=l;i<r;i++)
		{
			if(checknguyento(i)==1) dem++;
		}
		printf("%d\n",dem);
	}
}