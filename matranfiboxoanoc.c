#include<stdio.h>
#include<math.h>
int fibo(int fibonum[],int i)
{
	if(i==0) return 0;
	else if(i==1) return 1;
	return fibo(fibonum,i-1) + fibo(fibonum,i-2);
}
int main()
{
		int n=0;scanf("%d",&n);
		int a[n][n];
		int fibonum[n*n];
		for(int i=0;i<n*n;i++)
		{
			fibonum[i]=fibo(fibonum,i);
		}
		int round=1;
		int i=0,j=0;
		int x=(n%2==0)?(n/2):(n/2 +1);
		int count=0;
		while(round!=x+1)
		{
			if(count==n*n-1) a[i][j]=fibonum[count];
			for(j;j<n-round;j++) a[i][j]=fibonum[count++];
			for(i;i<n-round;i++) a[i][j]=fibonum[count++];
			for(j;j+1-round>0;j--) a[i][j]=fibonum[count++];
			for(i;i+1-round>0;i--) a[i][j]=fibonum[count++];
			i++;
			j++;
			round++;
		}
		for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					printf("%7d ",a[i][j]);
				}
				printf("\n");
			}
	
}