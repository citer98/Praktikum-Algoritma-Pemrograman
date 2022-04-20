#include <iostream>
#include <conio.h>
using namespace std;

class data{
	public:
	int proses();
	void input();
		
	private:
	string Nama,mtkl1,mtkl2,mtkl3;
    float hrg,tsks,tp,thsks;
    int NIM, pd,sks1, sks2, sks3;
};

void data::input()
{
	cout<<"Nama    : ";cin>>Nama;
	cout<<"NIM     : ";cin>>NIM;
	cout<<"Matkul 1: ";cin>>mtkl1;
	cout<<"SKS 1   : ";cin>>sks1;
	cout<<"Matkul 2: ";cin>>mtkl2;
	cout<<"SKS 2   : ";cin>>sks2;
	cout<<"Matkul 3: ";cin>>mtkl3;
	cout<<"SKS 3   : ";cin>>sks3;
	cout<<endl;
}

int data::proses()
{
	hrg=120000;
        tsks=sks1+sks2+sks3;
        thsks=tsks*hrg;
		tp=tp=thsks-(0.15*thsks);	
		
	 cout<<"==============Pembayaran SKS==============\n";
     cout<<"| Nama              : "<<Nama<<"         \t|"<<endl;
     cout<<"| NIM               : "<<NIM<<"          \t|"<<endl;
     cout<<"| Matkul            : "<<mtkl1<<"        \t\t|"<<endl;
     cout<<"| SKS               : "<<sks1<<"         \t|"<<endl;
	 cout<<"| Matkul            : "<<mtkl2<<"        \t\t|"<<endl;
     cout<<"| SKS               : "<<sks2<<"         \t|"<<endl;
	 cout<<"| Matkul            : "<<mtkl3<<"        \t\t|"<<endl;
     cout<<"| SKS               : "<<sks3<<"         \t|"<<endl;
     cout<<"| Total SKS         : "<<tsks<<"         \t|"<<endl;
     cout<<"| Pembayaran        : Rp. "<<thsks<<"    \t|"<<endl;
     cout<<"| Total Pembayaran  : Rp. "<<tp<<"       \t|"<<endl;
     cout<<"==========================================\n";
			
}
int main(){
    data mhs;
    mhs.input();
    mhs.proses();
	return 0;
}
