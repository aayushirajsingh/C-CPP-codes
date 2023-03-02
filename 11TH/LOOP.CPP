#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n;
	cout<<"Enter a number:";
	cin>>n;
	for(i=1;i<=5;i++)
	{
		if(i%2!=0)
		{
			cout<<endl<<i;
		}
	}
	getch();
}