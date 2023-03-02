#include<fstream.h>
#include<string.h>
#include<conio.h>
struct customer
{
	char name[51];
	float balance;
};
int main()
{
	clrscr();
	customer savac;
	strcpy(savac.name,"Tina Marshall");
	savac.balance=21310.75;
	ofstream fout;
	fout.open("Saving",ios::out|ios::binary);
	if(!fout)
	{
		cout<<"File can't be opened\n";
		return 1;
	}
	fout.write((char*) & savac,sizeof(customer));
	fout.close();
	ifstream fin;
	fin.open("Saving",ios::in|ios::binary);
	fin.read((char*) & savac,sizeof(customer));
	cout<<savac.name;
	cout<<" has the balance amount of Rs."<<savac.balance<<endl;
	fin.close();
	return 0;
}