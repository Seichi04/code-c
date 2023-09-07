#include<stdio.h>
// swap function
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}


// Insert Sort// thuat toan chen
void insert_sort(int *a,int n)
{
	int key;
	for(int i=0;i<n;i++)
	{
		key=a[i];
		int j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}



//Selection Sort// thuat toan sap xep chon
void selection_sort(int *a,int n)
{
	//chon gia tri min roi dua len dau
}

//Bubble Sort// thuat toan sap xep noi bot
void bubble_sort(int *a,int n)
{
	//sap xep noi bot
}

//Quick Sort// thuat toan sap xep de quy dua tren phan hoach
int partition(int *a,int low,int high)
{
	int pivot=a[high];
	int i=(low-1);
	for(int j=low;j<=high-1;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[high]);
	return (i+1);
}
void quickSort(int *a,int low,int high)
{
	if(low<high)
	{
		int pi=partition(a,low,high);
		quickSort(a,low,pi-1);
		quickSort(a,pi+1,high);
	}
}






void heap_sort(int *a,int n)
{
	
}

int main()
{
	int n=0;scanf("%d",&n);
		int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	quickSort(a,0,n-1);
	
	
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}