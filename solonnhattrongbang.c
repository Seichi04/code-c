#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	long long a[n][2];
	long long col=1000001,row=1000001;
	for(int i=0;i<n;i++)
	{
		scanf("%lld%lld",&a[i][0],&a[i][1]);
		if(a[i][0]<row) row=a[i][0];
		if(a[i][1]<col) col=a[i][1];
	}
	printf("%lld",row*col);
}