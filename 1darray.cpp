#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array";
	cin>>n;
	int arr[n];
	cout<<"array elements is : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
