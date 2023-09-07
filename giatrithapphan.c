#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    	printf("%0.15f\n", 1/(double)a[i]);
	}
	return 0;
}