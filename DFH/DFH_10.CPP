#include<fstream.h>
#include<process.h>
#include<conio.h>
int main()
{
	clrscr();
	char filename[13];
	cout<<"Enter File Name: ";
	cin.getline(filename,13);
	ifstream infile(filename,ios::in|ios::ate);
	if(!infile)
	{
		cout<<"Sorry! Can Not Open "<<filename<<" File\n";
		exit(-1);
	}
	long bytes=infile.tellg();
	cout<<"File Size is "<<bytes<<" Bytes.\n";
	getch();
	return 0;
}