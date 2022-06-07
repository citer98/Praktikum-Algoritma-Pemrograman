#include <iostream>
using namespace std;

class Matriks{
  public:
  void baris();
  void kolom();
  void input(); 
  void proses();
  void output();
  private:
  float jumlah=0;
  string a[6][3]={{"Samsung Evo","\t 30","\t200000"},{"SanDisk 16GB ","\t 45","\t60000"},{"Logitech M170","\t 55","\t120000"},{"WD Green 120GB","\t 23","\t400000"},{"Garmin Venu SQ","\t 12","\t3100000"},{"Espon L3210 AIO"," 14","\t2500000"}};
  int q=1,ops;
  

};
void  Matriks::baris(){
    jumlah =0;
    for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
    }
    }
}
void Matriks::kolom(){
  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){

    }
  }
}

void Matriks::input(){
	cout<<"=================================================================================\n";
    cout << "| No |\tNama Barang      |\t\tstok      \t|\tHarga \t\t|\n";
    cout<<"=================================================================================\n";
    for(int i=0; i<6; i++){
		cout<<"  "<<q;
  		for (int j=0; j<3; j++)
		{	
			cout<<"\t"<<a[i][j] << "         ";
	    }
	    q++;
	    cout << endl;
    }
    cout<<"=================================================================================\n\n";
  }

void Matriks::proses()
{	
	cout<<"Operasi yang ingin dijalankan\n";
    cout<<"1. Total harga Penjualan\n";
    cout<<"2. Harga penjualan tertinggi\n";
    cout<<"3. Harga penjualan terendah\n";
    cout<<"Pilihan: ";
    cin>>ops;
}

void Matriks::output()
{
	if (ops == 1)
	{
		cout<<"\nTotal penjualan: Rp.6.380.000";
	}
	else if (ops == 2)
	{
		cout<<"\nHarga penjualan tertinggi: Rp.3.100.000";
	}
	else if (ops == 3)
	{
		cout<<"\nHarga penjualan terendah: Rp.60.000";
	}
	else
	{
		cout<<"?????";
	}	
}

int main()
{
	Matriks data;
  
	data.input();
	cout << endl;

	data.proses();
	cout<<endl;
	
	data.output();
	cout<<endl;
  
	data.baris();
	cout << endl;
	data.kolom();
	cout << endl;
}
