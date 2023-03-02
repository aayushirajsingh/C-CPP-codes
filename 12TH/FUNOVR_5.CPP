#include<iostream.h>
#include<conio.h>
void print()                 //Function 1
{
	for(int k=1;k<=60;k++)
	cout<<"-";
	cout<<endl;
}
void print(int N)            //Function 2
{
	for(int k=1;k<=N;k++)
	cout<<"*";
	cout<<endl;
}
void print(int A,int B)      //Function 3
{
	for(int k=1;k<=B;k++)
	cout<<A*k<<" ";
	cout<<endl;
}
void print(char T,int N)     //Function 4
{
	for(int k=1;k<=N;k++)
	cout<<T<<" ";
	cout<<endl;
}
void main()
{
	clrscr();
	int u=9,v=4,w=3;
	char c='#';
	print();    //Function 1
	print(u);   //Function 2
	print(u,w); //Function 3
	print(c,v); //Function 4
	getch();
}