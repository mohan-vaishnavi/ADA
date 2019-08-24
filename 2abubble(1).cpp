#include<iostream>
#include<time.h>
using namespace std;

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
	cout<<"Enter the value of k\n";
	cin>>k;
	clock_t start,end,t;
	start=clock();
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
				
		}
		
	}
	
	end=clock();
	cout<<"kth smallest element is:\n";
	cout<<a[n-k];
	t = end-start;
	cout<<"\nTime taken is\n "<<(float)t/CLOCKS_PER_SEC<<" sec\n\n";
}