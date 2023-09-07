#include<stdio.h> 
#include<math.h> 
int main() 
{ 
	int m,n,k,k2,i,j,d=0,L[2]={0},R[2]={0},a[1001]; 
	scanf("%d%d%d",&n,&m,&k); 
	k2=k*2+1; 
	for (i=0;i<m;i++) scanf("%d",&a[i]); 
	for(i=0;i<m-1;i++) 
		for(j=i+1;j<m;j++) 
			if (a[i]<a[j]) 
			{ 
				int t=a[i]; a[i]=a[j]; a[j]=t; 
			}
	while (m--) 
 	{ 
 	L[1]=a[m]-k; R[1]=a[m]+k; 
 	if (L[1]<1) L[1]=1; 
 	if (R[1]>n) R[1]=n; 
 	i=ceil((float)(L[1]-R[0])/k2); 
 	if(L[1]<=R[0]+1+(i-1)*k2) i--; 
 	if (i>0) d+=i; L[0]=L[1]; R[0]=R[1]; 
 	} 
 	while (R[0]<n) 
 	{ 
 	d++; n-=k2; 
 	} 
 	printf("%d",d); 
}