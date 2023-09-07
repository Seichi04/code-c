#include<stdio.h>
#include<math.h>
int main()
{
	int n; scanf("%d",&n);
	if(n>0) printf("2\n");
	int dem=1;
	for(int i=3;dem<n;i+=2)
	{
		int dem1=0;
		for(int j=3;j<=sqrt(i);j+=2)
		{
			if(i%j==0) dem1++;
		}
		if(dem1==0) 
		{
			printf("%d\n",i);
			dem++;
		}
	}
}
