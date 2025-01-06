#include<iostream>
using namespace std;
int main()
{
	
	int n,temp;
	cout<<"Enter the size of an array";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element ";
		cin>>array[i];
	}
	cout<<"Unsorted array is :";
		for(int i=0;i<n;i++)
		{
			cout<<array[i]<<" ";
		}
		cout<<endl;
	cout<<"Sorted array is :";
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
	
	cout<<array[i]<<" ";
    }
}


