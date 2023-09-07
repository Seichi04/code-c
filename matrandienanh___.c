#include <stdio.h> 
#include <math.h> 
#include <string.h> 
//0 0 0 
//2 0 1 
//0 0 2 
long long n, m; 
long long a[1005][1005]; 
int main ()
{ 
	int t; 
	scanf ("%d", &t); 
	while (t--)
	{ 
		char s[1005]; 
		scanf ("%lld%lld", &n, &m); 
		for (long long i = 0; i < n; i++)
		{ 
			scanf ("%s", s); 
			for (long long j = 0; j < m; j++) 
			a[i][j] = s[j] - 48; 
		} 
		long long c[m]; 
		long long d[m]; 
		for(long long i=0;i<m;i++)
		{ 
			long long dem=0; 
			long long dem1=0; 
			for(long long j=0;j<n;j++)
			{ 
				if(a[j][i]==1){ dem++; } 
				if(a[j][i]==2){ dem1++; } 
			} 
			c[i]=dem; 
			d[i]=dem1; 
		} 
		long long dem=0; 
		for(long long i=0;i<n;i++)
		{ 
			for(long long j=0;j<m;j++)
			{ 
				for(long long k=j+1;k<m;k++)
				{ 
					if(a[i][j]==1&&a[i][k]==2)
					{ 
						dem+=c[k]+d[j]; 
						// printf("%lld %lld %lld %lld\n",i,j,k,dem); 
					} 
					if(a[i][j]==2&&a[i][k]==1)
					{ 
						dem+=d[k]+c[j]; 
						// printf("%lld %lld %lld %lld\n",i,j,k,dem); 
					} 
				} 
			}
		} 
		printf("%lld\n",dem); 
	} 
}