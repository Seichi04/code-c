#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a[n][2];
	int up=0,down=0;
	int minup=25000,mindown=25000;
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&a[i][0],&a[i][1]);
		up+=a[i][0];
		down+=a[i][1];
		if(a[i][0]<minup) minup=a[i][0];
		if(a[i][1]<mindown) mindown=a[i][1];
	}
	if(up>=down) printf("%d",up+mindown);
	else printf("%d",down);
	
	
}