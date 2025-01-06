#include<iostream>
using namespace std;
#define Max_size 5
int arr[Max_size];
int top=-1;

void REAR(int value){
	if(top==Max_size - 1)
	{
		cout<<" Queue is overflow "<<endl;
	}
	else
	{
		arr[++top]=value;
		cout<<"Queue inserted "<<value<<endl;
	}
}
void FRONT()
{
	if(top==-1){
		cout<<" Queue is underflow"<<endl;
		
	}
	else
	{
		int Item=arr[top++];
		cout<<"Queue deleted "<<Item<<endl;
	}
}
void display()
{
	if(top==-1)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		cout<<" Queue Elements is ";
		for(int i=0;i<=top;i++)
		{
			cout<<arr[i]<<" ";
		}
		
	}
	cout<<endl;
}

int main()
{
	int choice,value;
	cout<<"1.Enqueue\n2.Dequeue\n3.Display\n4.exit\n";
	
	while(true)
	{
	 cout<<"Enter your choice ";
	 cin>>choice;
	 
	switch(choice)
	{
		case 1:
			cout<<"Enter value to push";
			cin>>value;
			REAR(value);
			break;
		case 2:
			
			FRONT();
			break;
		case 3:
			display();
			break;
		case 4:
			cout<<"Exit";
			exit(0);
		default:
			cout<<"Invalid choice"<<endl;
	        }
      	}
	
}
