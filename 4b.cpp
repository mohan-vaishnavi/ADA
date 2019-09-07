#include <iostream>
using namespace std;

int visited[10][10];
int m,n;
int a[10][10];
int row[]={-1, -1, -1, 0, 0, 1, 1, 1 }; 
int col[]={-1, 0, 1, -1, 1, -1, 0, 1 }; 
bool isSafe(int i,int j)
{
	if(i>=0 && i<n && j>=0 && j<n)return true;
	return false;
}
void dfs(int i,int j)
{
	visited[i][j]=1;
	for(int k=0;k<8;k++)
	{
		if(isSafe(i+row[k],j+col[k]) && a[i+row[k]][j+col[k]] && visited[i+row[k]][j+col[k]]==0)
			dfs(i+row[k],j+col[k]);
	}
}
int main()
{
	int count=0;
	cout<<"Enter the size of the matrix\n";
	cin>>n;
	cin>>m;
	cout<<"Enter the adjacency matrix\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			visited[i][j]=0;
		}
	}
		
	cout<<"No of clusters are:\n";
	clock_t start,end,t;
	start=clock();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(visited[i][j]==0 && a[i][j]==1)
			{
				dfs(i,j);
				count++;
			}
		}
		
			
	}
	cout<<count<<endl;
	end=clock();
	t = end-start;
	cout<<"\nIt took me: "<<(float)t/CLOCKS_PER_SEC<<" sec\n\n";
	return 0; 
	
}
