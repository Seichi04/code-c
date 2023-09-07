#include<stdio.h>
#include<math.h>
int main()
{
	int n;scanf("%d",&n);
	if(n>2) printf("2\n");
	for(int i=3;i<n;i+=2)
	{
		int dem=0;
		for(int j=3;j<=sqrt(i);j+=2)
		{
			if(i%j==0) dem++;
		}
		if(dem==0) printf("%d\n",i);
	}
}