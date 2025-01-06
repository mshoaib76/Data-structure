#include<iostream>
using namespace std;
int binarySearch(int a[],int beg,int end,int val)
	{
		int mid;
		if(end>=beg)
		{
			mid=(beg+end)/2;
			//if the item to be searched is present ar middle
			if(a[mid]==val)
			{
				return mid;
			}
			//if the item to be searched is smaller than 
			else if(a[mid]<val)
			{
				return binarySearch(a,mid-1,end,val);
			}
			//if the item to be searched is greater than 
			else
			{
				 return binarySearch(a,beg,mid+1,val);
			}
		}
		return -1;
	}
	int main()
	{
	int a[7];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter five values ";
		cin>>a[i];
	}
	int val;
	cout<<"Enter value to be find"<<endl;
	cin>>val;
	int n =sizeof(a)/sizeof(a[0]);
	int res=binarySearch(a,0,n-1,val);
	cout<<"The elements of the array are ";
	for(int i=0;i<5;i++)
	{
	cout<<a[i]<<" ";
     }
	cout<<"\n Elements to be searched is "<<val;
	if(res==-1)
	{
	cout<<"\nElement is not present in the array";	
	}
	else
	{
		cout<<"\nElement is present at "<<res<<" position of array ";
	}
	return 0;
	}

