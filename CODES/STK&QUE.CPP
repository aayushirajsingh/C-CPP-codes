#include<iostream.h>
#include<stdio.h>
#include<conio.h>
//stack
struct node
{
	char country[20];
	node*link;
};
class stack
{
	node*top;
	public:
	stack()
	{
		top=NULL;
	}
	void push();
	void pop();
	void display();
	~stack();
};
void stack::push()
{
	node*temp= new node;
	gets(temp->country);
	temp->link=top;
	top=temp;
}
void stack::pop()
{
	if(top==NULL)
	cout<<"UNDERFLOW!!";
	else
	{
		node*ptr=top;
		top=top->link;
		delete ptr;
	}
}
void stack::display()
{
	node*temp=top;
	while(temp!=NULL)
	{
		cout<<temp->country<<"->";
		temp=temp->link;
	}
	cout<<"!!!\n";
}
stack::~stack()
{
	node*temp;
	while(top!=NULL)
	{
		temp=top;
		top=top->link;
		delete tmp;
	}
}
//queue
struct node
{
	char city[20];
	node*link;
};
class queue
{
	node*rear,*front;
	public:
	queue()
	{
		front=rear=NULL;
	}
	void push();
	void pop();
	void display();
	~queue();
};
void queue::push()
{
	node*temp= new node;
	gets(temp->city);
	temp->link=NULL;
	if(rear==NULL)
	{
		rear=front=temp;
	}
	else
	{
		rear->link=temp;
		rear=temp;
	}
}
void queue::pop()
{
	if(top==NULL)
	cout<<"UNDERFLOW!!";
	else
	{
		node*ptr=front;
		cout<<front->city<<"deleted";
		front=front->link;
		delete ptr;
		if(front == NULL)
		rear==NULL;
	}
}
queue::~queue()
{
	node*temp;
	while(front!=NULL)
	{
		temp=front;
		front=front->link;
		delete temp;
	}
}