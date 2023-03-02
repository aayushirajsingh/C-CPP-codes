#include<iostream.h>
#include<conio.h>
#include<string.h>
class travel
{
	char code[5];
	int adt,chd,dist;
	float tot_fare;
	public:
	travel()
	{
		strcpy(code,"NULL");
		adt=chd=dist=tot_fare=0;
	}
	void assignfare()
	{
		float fare=0;
		if(dist>=1000)
		{
			fare=adt*500+chd*250;
		}
		else if(dist>=500)
		{
			fare=adt*300+chd*150;
		}
		else
		{
			fare=adt*200+chd*100;
		}
		tot_fare=fare;
	}
	void entertravel()
	{
		cout<<endl<<"Enter value of Travel Code: ";
		cin>>code;
		cout<<"Enter number of Adults: ";
		cin>>adt;
		cout<<"Enter number of Children: ";
		cin>>chd;
		cout<<"Enter Distance: ";
		cin>>dist;
		assignfare();
	}
	void showtravel()
	{
		cout<<endl<<"\nTravel Code: "<<code;
		cout<<endl<<"Number of Adults: "<<adt;
		cout<<endl<<"Number of Children: "<<chd;
		cout<<endl<<"Distance: "<<dist;
		cout<<endl<<"Total Fare: "<<tot_fare;
	}
};
void main()
{
	clrscr();
	travel t1,t2;
	t1.entertravel();
	t2.entertravel();
	cout<<endl<<"Travel info: ";
	t1.showtravel();
	t2.showtravel();
	getch();
}