#include<stdio.h>
#include<math.h>
int luythua(int dem)
{
	int a=1;
	for(int i=0;i<dem-1;i++)
	{
		a*=10;
	}
	return a;
}
int main()
{
	int a;scanf("%d",&a);
	int dem=0;
	int t=a;
	while(t!=0)
	{
		dem++;
		t/=10;
	}
	int x=a % 10;
	int y=a/luythua(dem);
	int z=( a-luythua(dem)*y )/10;
	printf("%d",x*luythua(dem)+z*10+y);
}