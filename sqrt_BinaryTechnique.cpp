#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
	int n;
	float m,l=0.0,h,m1;
	cout<<"Enter the number"<<endl;
	cin>>n;
	h=n;
	
	clock_t start, end;
	start=clock();
	while(h>=l)
	{
		m=(l+h)/2;
		if(m*m==n)
		{
			cout<<"Square root:"<<m<<endl;
			break;
		}
		else if(m*m<n)
		{
			m1=m;
			while(m1*m1<n)
			{
				m1++;
			}
			l=floor(m1);
			cout<<"Floored sqrt:"<<l<<endl;
			break;
		}
		else if(m*m>n)
		{
			h=m+1;
		}

		
	}
	end=clock();
	cout<<"Time taken for execution: "<<float(end-start)/CLOCKS_PER_SEC<<" seconds"<<endl;
	return 0;
	
}