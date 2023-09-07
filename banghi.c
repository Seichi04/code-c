#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct tamgiac
{
	int a,b,c;
	float S;
};
typedef struct tamgiac tg;
tg nhap(tg x)
{
	scanf("%d %d %d",&x.a,&x.b,&x.c);
	float p=(x.a+x.b+x.c)/2;
	x.S=sqrt(p*(p-x.a)*(p-x.b)*(p-x.c));
	return x;
}
void xuat(tg x)
{
	printf("%d %d %d\n",x.a,x.b,x.c);
}
int main()
{
	int n=0;scanf("%d",&n);
	tg x[n];
	for(int i=0;i<n;i++)
	{
		x[i]=nhap(x[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(x[i].S>x[j].S)
			{
				tg temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		xuat(x[i]);
	}
}