#include<fstream.h>
#include<conio.h>
int main()
{
	clrscr();
	ifstream filin1,filin2;
	filin1.open("Stunames",ios::in);
	filin2.open("Stumarks",ios::in);
	char line[80];
	cout<<"\nThe contents of Stunames & Stumarks file are given below:"<<endl;
	filin1.getline(line,80);
	cout<<line<<endl;
	filin2.getline(line,80);
	cout<<line<<endl;
	filin1.getline(line,80);
	cout<<line<<endl;
	filin2.getline(line,80);
	cout<<line<<endl;
	filin1.getline(line,80);
	cout<<line<<endl;
	filin2.getline(line,80);
	cout<<line<<endl;
	filin1.close();
	filin2.close();
	return 0;
}