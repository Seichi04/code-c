#include<stdio.h>
#include<math.h>
int checknguyento(int a)
{
	int dem=0;
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
		int a=0;scanf("%d",&a);
		if(a==4) printf("2 2\n");
		for(int i=3;i<=a/2;i+=2)
		{
			int j=a-i;
			if(checknguyento(i)==1 && checknguyento(j)==1) printf("%d %d ",i,j);
		}
		printf("\n");
	}
}