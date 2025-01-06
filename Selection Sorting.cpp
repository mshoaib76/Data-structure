#include<iostream>
using namespace std;
int main()
{
	int n,temp,min,least;
	cout<<"Enter size";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter eleemts :";
		cin>>a[i];
	}
	cout<<endl;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		least=a[i];
		for(int j=i+1;j<n;j++)
		{
			if (a[j]<least)
			{
				min=j;
				least=a[j];
			}
		}
		if(i!=min)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
			
		}
	}
	cout<<"sorted array is ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

