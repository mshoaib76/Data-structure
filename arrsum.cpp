//transpose of matrix
#include<iostream>
using namespace std;
int main()
{
	int sum=0;
   int arr[2][2];
   for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
//			print("enter elements :");
			cin>>arr[i][j];
		}
		 
	}
	for(int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			sum+=arr[i][j];
		}
		
	}	
 
}
