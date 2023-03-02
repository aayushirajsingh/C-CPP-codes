#include<iostream.h>
#include<conio.h>
void add(int a,int b=2)
{
	cout<<endl<<"Addition= "<<a+b;
}
void add(float c,float d=2.0f)
{
	cout<<endl<<"Addition= "<<c+d;
}
void main()
{
	clrscr();
	cout<<"For Addition: ";
	add(12);
	add(13.4f);
	getch();
}