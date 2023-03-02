#include<stdlib.h>
#include<fstream.h>
#include<conio.h>
int main()
{
	clrscr();
	ofstream fout;
	fout.open("Aschars",ios::app);
	if(!fout)
	{
		cout<<"The file cannot be opened!!\n";
		return 1;
	}
	char ch;
	int line=0;
	for(int i=33;i<128;i++)
	{
		fout.put((char)i);
	}
	fout.close();
	ifstream fin;
	fin.open("Aschar",ios::in);
	fin.seekg(0);
	for(i=33;i<128;i++)
	{
		fin.get(ch);
		cout<<" "<<i<<"=";
		cout.put((char)(i));
		if(!(i%8))
		{
			cout<<endl;
			line++;
		}
		if(line>22)
		{
			system("PAUSE");
			line=0;
		}
	}
	return 0;
}