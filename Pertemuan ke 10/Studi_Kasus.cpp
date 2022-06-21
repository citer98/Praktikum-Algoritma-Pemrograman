#include<iostream>
using namespace std;

class bio
{
	public:
	void input();
	void proses();
	void output();
	
	private:
	string na1,na2,na3,na4,na5;
	string *Na1=&na1, *Nb2=&na2, *Nc3=&na3, *Nd4=&na4, *Ne5=&na5;
	int A, B, C, D, E;
	int *Na=&A,*Nb=&B, *Nc=&C, *Nd=&D, *Ne=&E;	
};

void bio::input()
{
	cout<<"Masukan Biodata Mahasiswa";
	cout<<"\nNama : "; cin>>na1;
	cout<<"NIM  : "; cin>>A;
	cout<<"\nNama : "; cin>>na2;
	cout<<"NIM  : "; cin>>B;
	cout<<"\nNama : "; cin>>na3;
	cout<<"NIM  : "; cin>>C;
	cout<<"\nNama : "; cin>>na4;
	cout<<"NIM  : "; cin>>D;
	cout<<"\nNama : "; cin>>na5;
	cout<<"NIM  : "; cin>>E;
}

void bio::proses()
{
	cout<<"\nMenampilkan Biodata Mahasiswa menggunakan pointer\n";
	cout<<"                     Hasilnya                    ";
}

void bio::output()
{
	cout<<"\n=============================================================================\n";
	cout<<"Biodata Mahasiswa\n";
	cout<<"Nama : "<<*Na1<<" \nNIM  : "<<*Na<<"\n\n";
	cout<<"Nama : "<<*Nb2<<" \nNIM  : "<<*Nb<<"\n\n";
	cout<<"Nama : "<<*Nc3<<" \nNIM  : "<<*Nc<<"\n\n";
	cout<<"Nama : "<<*Nd4<<" \nNIM  : "<<*Nd<<"\n\n";
	cout<<"Nama : "<<*Ne5<<" \nNIM  : "<<*Ne;
	cout<<"\n=============================================================================\n";
}

int main()
{
	bio data;
	data.input();
	cout<<endl;
	
	data.proses();
	cout<<endl;
	
	data.output();
	
}
