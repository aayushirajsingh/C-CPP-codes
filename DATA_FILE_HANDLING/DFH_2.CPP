#include<fstream.h>
#include<conio.h>
int main()
{
	clrscr();
	ofstream filout;
	filout.open("Stunames",ios::out);
	filout<<"Devyani\n"<<"Monica Patrick\n"<<"Neil Banerjee\n";
	filout.close();
	filout.open("Stumarks",ios::out);
	filout<<"78.92\n"<<"72.17\n"<<"69.33\n";
	filout.close();
	char line[80];
	ifstream filin;
	filin.open("Stunames",ios::in);
	cout<<"\nThe contents of Stunames file are given below:"<<endl;
	filin.getline(line,80);
	cout<<line<<endl;
	filin.getline(line,80);
	cout<<line<<endl;
	filin.getline(line,80);
	cout<<line<<endl;
	filin.close();
	filin.open("Stumarks",ios::in);
	cout<<"\nThe contents of Stumarks file are given below:"<<endl;
	filin.getline(line,80);
	cout<<line<<endl;
	filin.getline(line,80);
	cout<<line<<endl;
	filin.getline(line,80);
	cout<<line<<endl;
	filin.close();
	return 0;
}