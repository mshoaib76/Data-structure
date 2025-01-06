#include<iostream>
using namespace std;
#define Max_size 5
int stack[Max_size];
int top=-1;

void push(int value)
{
	if(top==Max_size -1)
	{
		cout<<"Stack is overflow"<<endl;
		exit(0);
	}
	else
	{
		stack[top]==value;
		top++;
		cout<<"Element inserted is "<<value<<endl;
	}
	
}
void pop()
{
	if(top==-1)
	{
		cout<<"stack is underflow"<<endl;
		exit(0);
		
	}
	else
	{
		int Item=stack[top];
		cout<<"Element removed "<<Item<<endl;
	}
	
}
void display()
{
	if(top==-1)
	{
		cout<<"Stack is empty";
		exit(0);
	}
	else
	{
		for(int i=0;i<top;i++)
		{
			cout<<stack[i]<<" ";
		}
	}
}
void peek()
{
	if(top==-1)
	{
		cout<<"Stack is empty"<<endl;
		exit(0);
	}
	cout<<"top element is ";
	cout<<stack[top]<<endl;
}


int main()
{
	int choice ,value;
	cout<<"operations\n1-insertion\n2-deletion\nDisplay\n4-peek\n5-Exit\n";
	while(true)
	{
		cout<<"Enter your choice";
		cin>>choice;
			
		switch(choice)
		{
			case 1:
				cout<<"Enter value for push";
				cin>>value;
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4 :
				peek();
				break;
			case 5:
				cout<<"exit";
				exit(0);
		}
	}
}

