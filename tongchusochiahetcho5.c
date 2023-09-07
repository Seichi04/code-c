#include<stdio.h>
#include<math.h>
int sum(int a)
{
	int x=0;
	while(a!=0)
	{
		x+=a%10;
		a/=10;
	}
	return x;
}
int checknguyento(int i)
{
	float x=sqrt(i);
	for(int k=2;k<=x;k++)
	{
		if(i%k==0) return 0;
	}
	return 1;
}
int main()
{
	int n=0;scanf("%d",&n);
	int dem=0;
	for(int i=3;i<n;i+=2)
	{
		if(sum(i)%5!=0) continue;
		if(checknguyento(i)==0) continue;
		dem++;
		printf("%d ",i);
	}
	printf("\n%d",dem);
}