#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int liter,jenis, pil, harga, uang, kembalian;
	int Pertamax,Pertalite;
	string nama;
	
	cout<<"============SPBU Jogja============"<<endl;
	cout<<"Jenis bensin yang tersedia:"<<endl;
	cout<<"1. Pertalite Rp.7000/liter"<<endl;
	cout<<"2. Pertamax  Rp.9000/liter"<<endl;
	cout<<endl;
	cout<<"Masukan Pilihan : ";
	cin>>pil;
	cout<<endl;
	
	if(pil==1)
	{
		cout<<"  Pertalite"<<endl;
		cout<<"Jumlah liter: ";
		cin>>liter;
		harga=7000*liter;
		cout<<"Uang yang diterima: ";
		cin>>uang;
		cout<<"Pembelian atas nama: ";
		cin>>nama;
		kembalian=uang-harga;
		
		cout<<endl;
		cout<<"======================================"<<endl;
		cout<<"Nama Pembeli   : "<<nama<<endl;
		cout<<"Jenis BBM      : Pertalite"<<endl;
		cout<<"Total Harga    : "<<harga<<endl;
		cout<<"Uang pembayaran: "<<uang<<endl;
		cout<<"Kembalian      : "<<kembalian<<endl;
		cout<<"======================================";
	}
	else if(pil==2)
	{
		cout<<"  Pertamax"<<endl;
		cout<<"Jumlah liter: ";
		cin>>liter;
		harga=9000*liter;
		cout<<"Uang yang diterima: ";
		cin>>uang;
		cout<<"Pembelian atas nama: ";
		cin>>nama;
		kembalian=uang-harga;
		
		cout<<endl;
		cout<<"======================================"<<endl;
		cout<<"Nama Pembeli   : "<<nama<<endl;
		cout<<"Jenis BBM      : Pertamax"<<endl;
		cout<<"Total Harga    : "<<harga<<endl;
		cout<<"Uang pembayaran: "<<uang<<endl;
		cout<<"Kembalian      : "<<kembalian<<endl;
		cout<<"======================================";
	}
	else
	{
		cout<<"Pilihan tidak tersedia";
	}	
	return 0;
}
