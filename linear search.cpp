//linear search 
#include <iostream>
using namespace std;
int main()
{
	int array[5];
	int loc=-1,n;
	cout<<"Enter five elements :";
	for(int j=0;j<5;j++)
	{
		cin>>array[j];
	}
	cout<<"Enter value you want to find : ";
	cin>>n;
	for (int j=0;j<5;j++)
	{
		if(array[j]==n)
		{
		loc=j;
     	} 
    }
    
     if(loc==-1)
     {
     	cout<<"value not found";
	 }
	 else
	 {
	 	cout<<"value found at index "<<loc;
	 }
 
     
}
