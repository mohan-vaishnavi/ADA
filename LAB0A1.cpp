#include <iostream>
using namespace std;
int main()
{
	int n, max=0;
	cout<<"Enter the number of values";
	cin>>n;
	int ar[n];
	cout<<"Enter the values";
	for(int i=0;i<n;;i++)
	{
		cin>>ar[i];
		if(ar[i-1]>ar[i])
		{
			max=ar[i];
		}
	}
	cout<<max;
}