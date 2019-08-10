#include <iostream>
#include <fstream>
using namespace std;

int main () 
{
  ofstream myfile;
  myfile.open ("ex.txt",ios::out);
  int t, flag;
  cin>>t;
  myfile<<t<<"\n";
  for(int i=0;i<t;i++)
  {
	  int n, k;
	  cin>>n>>k;
	  myfile<<n<<" "<<k<<"\n";
	  int ar[n];
	  for(int j=0;j<n;j++)
	  {
		  cin>>ar[j];
		  myfile<<ar[j]<<" ";
		  
	  }
	  myfile<<"\n";
	  
  }
  
  myfile.close();
  string line,search_ele,ele;
  ifstream myfile1("ex.txt");
  //cout<<"Reading from file:\n";
  if (myfile1.is_open())
  {
    myfile1>>line;
	for(int j=0;j<t;j++)
	{
		flag=0;
		myfile1>>line;
		myfile1>>search_ele;
		//cout<<"search: "<<search_ele<<"\n";
		for(int i=0;i<atoi(line.c_str());i++)
		{
			myfile1>>ele;
			//cout<<ele;
			if(atoi(ele.c_str())==atoi(search_ele.c_str()))
			{
				flag=1;
				
			}
		}
			if(flag==1)
				cout<<"1\n";
			else
				cout<<"-1\n";
				
		
	}
	//cout<<line;
  }
  else cout << "Unable to open file"; 
  
  return 0;
 
}