#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class fuel
{
	int flino;
	char dest[30];
	float dist,fuel;
	void calfuel()
	{
		if(dist<=1000)
		{
			fuel=500;
		}

		else if(dist>1000 && dist<=2000)
		{
			fuel=1100;
		}
		else if(dist>2000)
		{
			fuel=2200;
		}
	}
	public:
	void feedinfo()
	{
		cout<<"Enter Flight Number: ";
		cin>>flino;
		cout<<"Enter Destination: ";
		gets(dest);
		cout<<"Enter Distance: ";
		cin>>dist;
		calfuel();
	}
	void showinfo()
	{
		cout<<endl<<"Flight Info: "<<endl;
		cout<<"Flight Number: "<<flino<<endl;
		cout<<"Destination: "<<dest<<endl;
		cout<<"Distance: "<<dist<<endl;
		cout<<"Fuel: "<<fuel;
	}
};
void main()
{
	clrscr();
	fuel f;
	f.feedinfo();
	f.showinfo();
	getch();
}