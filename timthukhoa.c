#include<stdio.h>
struct infor
{
	char ten[50];
	char ngaysinh[50];
	float diem1,diem2,diem3;
	int code;
};
int main()
{
	int n=0; scanf("%d",&n);
	getchar();
	struct infor a[n];
	float tong[n];
	for(int i=0;i<n;i++)
	{
		gets(a[i].ten);
		gets(a[i].ngaysinh);
		scanf("%f %f %f",&a[i].diem1,&a[i].diem2,&a[i].diem3);
		getchar();
		a[i].code=i+1;
		tong[i]= a[i].diem1+a[i].diem2+a[i].diem3;
	}
	float max=tong[0];
	for(int i=1;i<n;i++)
	{
		if(tong[i]>max) max=tong[i];
	}
	for(int i=0;i<n;i++)
	{
		if(tong[i]==max) printf("%d %s %s %.1f\n",a[i].code,a[i].ten,a[i].ngaysinh,tong[i]);
	}
}