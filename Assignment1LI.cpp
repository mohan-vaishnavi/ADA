#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int n, max;
	cout<<"Enter the number of values\n";
	cin>>n;
	int ar[n];
	cout<<"Enter the values\n";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	max=ar[0];
	for(int i=1; i<n;i++)
	{
		if(ar[i]>max)
			max=ar[i];
	}
	cout<<max<<endl;
	return 0;
}
