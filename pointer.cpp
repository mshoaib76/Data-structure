#include<iostream>
using namespace std;
int main()
{
	int n;
	int *ptr;
	int **ptr2;
	cout<<"Enter value of n :";
	cin>>n;
	ptr=&n;
	ptr2=&ptr;
	cout<<"value of n is :"<<n<<endl;
	cout<<"Address of n is "<<ptr<<endl;
	cout<<"Address of pointer is :"<<ptr2<<endl;
	cout<<"orignal value of n is :"<<**ptr2<<endl;
	
	cout<<"size of pointer is :"<<sizeof(ptr);
	
}
