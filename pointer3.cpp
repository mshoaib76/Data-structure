#include<iostream>
using namespace std;
int main()
{
	int *ptr1;
	int *ptr2;
	int **ptr3;
	int **ptr4;
	int n1,n2;
	cout<<"Enter the first value :";
	cin>>n1;
	cout<<"Enter the second value :";
	cin>>n2;
	ptr1=&n1;
	ptr2=&n2;
	ptr3=&ptr1;
	ptr4=&ptr2;
	cout<<"value of n1 is :"<<n1<<endl;
	cout<<"value of n2 is :"<<n2<<endl;
	cout<<"Address of n1 is :"<<ptr1<<endl;
	cout<<"Address of n2 is :"<<ptr2<<endl;
	cout<<"Derefrance of first value is :"<<**ptr3<<endl;
	cout<<"Derefrance of second value is :"<<**ptr4<<endl;
	cout<<"size of ptr1 is :"<<sizeof(ptr1);
}
