#include<stdio.h>
#include<math.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a[3][2];
	for(int i=0;i<3;i++)
	{
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	for(int i=0;i<3;i++)
	{
		if(a[i][0]<a[i][1]) swap(&a[i][0],&a[i][1]);
	}
	int s=0;
	for(int i=0;i<3;i++)
	{
		s+=(a[i][0]*a[i][1]);
	}
	int c=sqrt(s);
	if(s>(c*c))
	{
		printf("NO");
		return 0;
	}
	if(a[0][0]==a[1][0] && a[0][0]==a[2][0] && a[0][0]==(a[0][1]+a[1][1]+a[2][1]))
	{
		printf("YES");
		return 0;
	}
	for(int i=0;i<3;i++)
	{
		int max=i;
		for(int j=i+1;j<3;j++)
		{
			if(a[max][0]<a[j][0]) max=j;
		}
		swap(&a[max][0],&a[i][0]);
		swap(&a[max][1],&a[i][1]);
	}
	int hieu=c-a[0][1];
	if(a[0][0]!=c)
	{
		printf("NO");
		return 0;
	}
	if(a[1][1]==hieu) swap(&a[1][1],&a[1][0]);
	if(a[2][1]==hieu) swap(&a[2][1],&a[2][0]);
	if(a[1][0]!=hieu || a[2][0]!=hieu)
	{
		printf("NO");
		return 0;
	}
	else
	{
		if((a[1][1]+a[2][1])==c)
		{
			printf("YES");
			return 0;
		}
	}
}