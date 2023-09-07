#include<stdio.h>
struct sinhvien
{
	int ma;
	char ten[50];
	float diema,diemb,diemc;
};
int main()
{
	
	struct sinhvien sv[1000];
	int n=0;
	for(int x=0;;)
	{
		int h=0;
		scanf("%d",&h);
		if(h==1)
				{
					int k=0;scanf("%d",&k);
					getchar();
					for(int i=0;i<k;i++)
					{
						sv[n].ma=n+1;
						gets(sv[n].ten);
						scanf("%f%f%f",&sv[n].diema,&sv[n].diemb,&sv[n].diemc);
						getchar();
						n++;
					}
					printf("%d\n",k);
				}
		else if(h==2)
				{
					int k=0;scanf("%d",&k);
					getchar();
					sv[k-1].ma=k;
					gets(sv[k-1].ten);
					scanf("%f%f%f",&sv[k-1].diema,&sv[k-1].diemb,&sv[k-1].diemc);
					printf("%d\n",sv[k-1].ma);
				} 
		else if(h==3)
				{
					for(int i=n-1;i>=0;i--)
					{
						if(sv[i].diema<=sv[i].diemb && sv[i].diemb<=sv[i].diemc)
							printf("%d %s %.1f %.1f %.1f\n",sv[i].ma,sv[i].ten,sv[i].diema,sv[i].diemb,sv[i].diemc);
					}
					return 0;
			 	} 
	}
}