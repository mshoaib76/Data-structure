//n size array 
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of n sixe: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Array elements is :";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
