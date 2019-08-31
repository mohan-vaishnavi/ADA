#include<iostream>
#include<time.h>
using namespace std;

int count1= 0, count2=0, count3 =0;
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
		count1++;
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        
        int m = l+(r-l)/2; 
		mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r);   
        merge(arr, l, m, r); 
    } 
} 

void bubble(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			count2++;
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
				
		}
		
	}
}

void sel(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		int mpos=i;
		int max=a[i];
		for(int j=i+1;j<n;j++)
		{
			count3++;
			if(a[j]>max)
			{
				max=a[j];
				mpos=j;
			}
				
		}
		a[mpos]=a[i];
		a[i]=max;
	}
}
int main() 
{ 
    int n;
	cout<<"Enter the size of array\n";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergeSort(a, 0, n - 1); 
	bubble(a, n);
    sel(a, n);
    cout<<"\nSorted array is \n"; 
    for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\nNumber of comparisons: "<<endl;
	cout<<"Merge sort: "<<count1<<endl;
	cout<<"Bubble sort: "<<count2<<endl;
	cout<<"Selection sort: "<<count3<<endl;
    return 0; 
} 

