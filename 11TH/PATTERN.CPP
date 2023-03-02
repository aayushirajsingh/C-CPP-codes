#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,c=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" "<<c++;
		}
		cout<<endl;
	}
	getch();

}
