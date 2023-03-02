#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[3][3],i,j,total=0;
	cout<<"Enter the elements of matrix: ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
			total=total+a[i][j];
		}
	}
	cout<<"Sum of elements: "<<total;
	getch();
}