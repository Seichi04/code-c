#include<stdio.h>
void nhap(int m,int n,int a[m][n])
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void nhanmt(int m,int n,int p,int a[m][n],int b[n][p],int x[m][p])
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
		{
			x[i][j]=0;
			for(int z=0;z<n;z++)
			{
				x[i][j]+=(a[i][z]*b[z][j]);
			}
		}
	}
}
void xuat(int m,int n,int a[m][n])
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int m=0,n=0,p=0,q=0;
	scanf("%d %d %d %d",&m,&n,&p,&q);
	int a[m][n],b[n][p],c[p][q];
	nhap(m,n,a);
	nhap(n,p,b);
	nhap(p,q,c);
	int x[m][p],y[m][q];
	nhanmt(m,n,p,a,b,x);
	nhanmt(m,p,q,x,c,y);
	xuat(m,q,y);
}