#include<iostream>
#include<time.h>
using namespace std;

int partition1(int *a,int start,int end)

{

int pivot=a[start],p1=start+1,i,temp;

for(i=start+1;i<=end;i++)
{

if(a[i]<pivot)
    {
        if(i!=p1)
      {  
            temp=a[p1];
            a[p1]=a[i];
            a[i]=temp;
      }     p1++;
    }
}

        a[start]=a[p1-1];
        a[p1-1]=pivot;

return p1-1;
}


void quicksort(int *a,int start,int end)
{
 int p1;
 if(start<end)
{
    p1=partition1(a,start,end);
    quicksort(a,start,p1-1);
    quicksort(a,p1+1,end);
}
}

int main()
{
	int k,n;
	cout<<"Enter the size of array\n";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	clock_t start,end,t;
	start=clock();
	
	quicksort(a, 0, n-1);
	
	end=clock();
	cout<<"Sorted array obtained using the in-place quick sort technique is: \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	t = end-start;
	cout<<"\nTime taken is\n "<<(float)t/CLOCKS_PER_SEC<<" sec\n\n";
}

