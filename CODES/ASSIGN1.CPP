#include<conio.h>
#include<iostream.h>
void main( )
{
	clrscr();
	int Ar[ ] = { 6 , 3 , 8 , 10 , 4 , 6 , 7} ;
	int *Ptr = Ar , I ;
	cout<<++*Ptr++<<" @ " ;
	cout<<Ptr;
	I = Ar[3] - Ar[2] ;
	cout<<++*(Ptr+I)<<" @ "<<"\n" ;
	cout<<++I + *Ptr++ << " @ " ;
	cout<<*Ptr++ <<" @ "<< '\n' ;
	for( ; I >=0 ; I -=2)
	cout<<Ar[I] <<" @ " ;
	getch();
}