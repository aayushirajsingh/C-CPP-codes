#include<iostream.h>
#include<conio.h>
class voting
{
	int n,a,r,s,t;
	public:
	void vote()
	{
		r=0,s=0,t=0;
		cout<<"Enter number of votes: ";
		cin>>a;
		for(int i=1;i<=a;i++)
		{
			cout<<"\nEnter "<<i<<" member vote: ";
			cin>>n;
			if(n==1)
			{
				r++;
			}
			if(n==2)
			{
				s++;
			}
			if(n==3)
			{
				t++;
			}
		}
	}
	void display()
	{
		cout<<"\nBJP: "<<r<<"\nCongress: "<<s<<"\nAAP: "<<t<<endl;
	}
	void win()
	{
		if(r>s && r>t)
		{
			cout<<"\nBJP wins!";
		}
		else if(s>r && s>t)
		{
			cout<<"\nCongress wins!";
		}
		else
		{
			cout<<"\nAAP wins!";
		}
	}
};
void main()
{
	voting v;
	clrscr();
	v.vote();
	v.display();
	v.win();
	getch();
}