#include<stdio.h>
int main()
{
	int x=0,y=0;scanf("%d%d",&x,&y);
	int dem=0;
	if(x-y==1) dem=1;
	else if(x-y==0) dem=0;
	else dem=2;
	for(int i=x+1,i<y-1;i++)
}