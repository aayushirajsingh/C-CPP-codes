#include<iostream.h>
#include<conio.h>
class pattern
{
	int n;
	public:
	void display()
	{
		cout<<"Enter the level: ";
		cin>>n;
	}

	void hashtag()
	{


		for (int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				cout<<"#";
			}
			cout<<endl;
		}

	}

};
void main()
{
	pattern p;
	p.display();
	p.hashtag();
	getch();
}
