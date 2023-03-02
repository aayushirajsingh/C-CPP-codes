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


		for (int i=0;i<n;i++)
		{
			for(int j=n;j>i;j--)
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
