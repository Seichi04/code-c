#include<stdio.h>
#include<math.h>
int max_subarray_sum(long long A[], long n) {
    long long max_so_far = A[0];
    long long max_ending_here = A[0];
    for (int i = 1; i < n; i++) {
        max_ending_here = (A[i] > max_ending_here + A[i]) ? A[i] : max_ending_here + A[i];
        max_so_far = (max_so_far > max_ending_here) ? max_so_far : max_ending_here;
    }
    return max_so_far;
}
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		long n=0;scanf("%ld",&n);
		long long a[n];
		for(long i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		printf("%lld\n",max_subarray_sum(a,n));
	}
	
}