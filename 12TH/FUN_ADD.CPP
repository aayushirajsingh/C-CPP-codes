#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,ans,addno(int);
	cout<<"Enter N number (For Addition) : ";
	cin>>n;
	ans=addno(n);
	cout<<"Addition = "<<ans;
	getch();
}
int addno(int m)
{
	int i,total=0;
	for(i=1;i<=m;i++)
	{
		total=total+i;
	}
	return total;
}