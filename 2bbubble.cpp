#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	int k,n;
	cout<<"Enter the value of k\n";
	cin>>k;
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
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
				
		}
		
	}
	cout<<"k largest elements are: \n";
	for(int i=n-1;i>=n-k;i--)
		cout<<a[i]<<endl;
	
	end=clock();
	t = end-start;
	cout<<"\nTime taken: "<<(float)t/CLOCKS_PER_SEC<<" sec\n\n";
}