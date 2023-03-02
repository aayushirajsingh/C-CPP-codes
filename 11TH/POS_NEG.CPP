#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[3][3],i,j,pos=0,neg=0;
	cout<<"Enter the elements of matrix: ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
			if(a[i][j]>0)
			{
				pos++;
			}
			else
			{
				neg++;
			}
		}
	}
	cout<<"Positive elements: "<<pos;
	cout<<"\nNegative elements: "<<neg;
	getch();
}
