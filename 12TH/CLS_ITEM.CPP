#include<iostream.h>
#include<conio.h>
class item
{
	int code[10];
	float price[10];
	public:
	void inti();
	float lar();
	float sum();
	void dis_it();
};
void item::inti()
{
	for(int i=0;i<2;i++)
	{
		cout<<endl<<"Item no: "<<i+1;
		cout<<endl<<"Enter item code: ";
		cin>>code[i];
		cout<<endl<<"Enter item price: ";
		cin>>price[i];
		cout<<endl;
	}
}
float item::lar()
{
	float lar=price[0];
	for(int i=1;i<2;i++)
	{
		if(lar<price[i])
			lar=price[i];
	}
	return lar;
}
float item::sum()
{
	float sum=0;
	for(int i=0;i<2;i++)
	{
		sum+=price[i];
	}
	return sum;
}
void item::dis_it()
{
	cout<<endl<<"Code : price\n";
	for(int i=0;i<2;i++)
	{
		cout<<endl<<code[i];
		cout<<" : "<<price[i];
	}
	cout<<endl;
}
int main()
{
	clrscr();
	item order;
	order.inti();
	float tot,big;
	int ch=0;
	do
	{
		cout<<endl<<"\nMain menu.";
		cout<<endl<<"\n1.Display largest price.\n2.Display sum of prices.\n3.Display item list.";
		cout<<endl<<"\nEnter your choice: ";
		cin>>ch;

		switch(ch)
		{
			case 1:
				big=order.lar();
				cout<<endl<<"The largest price: "<<big;
				break;
			case 2:
				tot=order.sum();
				cout<<endl<<"Sum of prices is "<<tot;
				break;
			case 3:
				order.dis_it();
				break;
			default:
				cout<<endl<<"INVALID CHOICE!!!";
				break;
		}
	}while(ch>=1 && ch<=3);
	return 0;
}