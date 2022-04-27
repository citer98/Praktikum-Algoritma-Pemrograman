#include <iostream>
#include <string.h>
using namespace std;

class data{
            public:
                   void input();
                   void proses();
                   void output();
            private:
                std::string nama;
 				std::string mtkl;
				int nilai[10];
				int jmk;
				double jum,rata,mn,mx;  
                    
            };
            
void data::input()
{
	std::cout << "Masukkan Nama : ";
	std::getline(std::cin, nama);
	std::cout << "Matakuliah : ";
	std::getline(std::cin, mtkl);
	cout<<"\nDaftra Nilai";
	for(int i=0;i<5;i++)
	{
	cout<< "\n Masukan nilai: ";
	cin>> nilai[i]; 
	}
}

void data::proses()
{
	mn=nilai[0];
mx=nilai[0];
for(int i=1;i<5;i++)
	{
		if(mn>nilai[i])
		{
			mn=nilai[i];
		}
		else if(mx<nilai[i])
		{
			mx = nilai[i];
		}
	jum=nilai[i]+nilai[i]+nilai[i];
	}
	rata=jum/5;
}

void data::output()
{
	cout<<endl;
	cout<<"==========Data=========="<<endl;
	std::cout << "Nama Dosen : " << nama << std::endl;
	std::cout << "Matakuliah : " << mtkl << std::endl;
	for (int a=0;a<5;a++){
	cout<<"Nilai Matakuliah: "<<nilai[a]<<endl;
	}
  cout<<endl;
	cout<<"Jumlah Nilai   : "<<jum<<endl;
	cout<<"Rata-rata      : "<<rata<<endl;
	cout<<"Nilai Terendah : "<< mx << endl;
	cout<<"Nilai Tertinggi: "<< mn << endl;    
  cout<<"========================"<<endl;
}

int main()
{
data mhs;
mhs.input();
mhs.proses();
mhs.output();
return 0;
}
