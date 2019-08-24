#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int n,i,j,k, temp;
	clock_t start, end;
	cout<<"Enter number of array elements\n";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		cout<<"\n";
	}
	//bubble sort
	start = clock();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	end = clock();
	cout<<"Enter the kth smallest element to be found\n";
	cin>>k;
	cout<<"The kth smallest element is\n"<<a[k];
	cout<<"Time taken is " << ((float)(end-start))/(CLOCKS_PER_SEC) << " sec\n";
}