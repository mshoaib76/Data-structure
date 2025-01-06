#include<iostream>
using namespace std;
int main()
{
	int arr[5],n;
	cout<<"Enter five elements ";
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Elements of array is ";
	for(int i=0;i<n;i++)
	
	{
		cout<<arr[i]<<" ";
	}
}
