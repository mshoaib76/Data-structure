#include<iostream>
using namespace std;
int main()
{
	int temp,n,min;
	cout<<"Enter the size of array";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element :";
		cin>>a[i];
	}
	cout<<"Unsorted array is :";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<=n-1;i++)
	{
		min=i;
		for(int j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[min])
			
			
				min=j;
			
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
	cout<<"Sorted array is :";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
