#include<stdio.h>
struct infor
{
	char ten[50];
	char ngaysinh[50];
	float diem1,diem2,diem3;
	int code;
	float tong;
};
void swaps(struct infor *a,struct infor *b)
{
	struct infor temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n=0; scanf("%d",&n);
	getchar();
	struct infor a[n];
	for(int i=0;i<n;i++)
	{
		gets(a[i].ten);
		gets(a[i].ngaysinh);
		scanf("%f %f %f",&a[i].diem1,&a[i].diem2,&a[i].diem3);
		getchar();
		a[i].code=i+1;
		a[i].tong= a[i].diem1+a[i].diem2+a[i].diem3;
	}
	for(int i=0;i<n;i++)
	{
		int max=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j].tong>a[max].tong) max=j;
		}
		swaps(&a[max],&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d %s %s %.1f\n",a[i].code,a[i].ten,a[i].ngaysinh,a[i].tong);
	}
}