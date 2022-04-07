#include<iostream>
#include<fstream>
using namespace std;

class Input
{
public:
  void cetak()
  {
  	cout << "=====================\n";
    cout << "  Rumah makan enak \n";
    cout << "Menu Rumah makan enak  \n";
   	cout << "=====================\n";
    cout << "      Menu          Harga   \n";
    cout << "1) Ayam Geprek   Rp. 21000 \n";
    cout << "2) Ayam Goreng   Rp. 17000 \n";
    cout << "3) Udang Goreng  Rp. 19000 \n";
    cout << "4) Cumi Goreng   Rp. 20000 \n";
    cout << "5) Ayam Bakar    Rp. 25000 \n";
    cout << "Pesan Ayam  Geprek : ";
    cin >> banyakAK;
    cout << "Pesan Ayam  Goreng   : ";
    cin >> banyakAG;
    cout << "Pesan Udang Goreng   : ";
    cin >> banyakUG;
    cout << "Pesan Cumi  Goreng   : ";
    cin >> banyakCG;
    cout << "Pesan Ayam  Bakar    : ";
    cin >> banyakAR;
    cout << "masukkan jarak rumah : ";
    cin >> jarak;
  }
  void toFile()
  {
    tulis_data.open("api_data.txt");
    tulis_data << banyakAK << endl;
    tulis_data << banyakAG << endl;
    tulis_data << banyakUG << endl;
    tulis_data << banyakCG << endl;
    tulis_data << banyakAR << endl;
    tulis_data << jarak;
    tulis_data.close();
  }

private:
  ofstream tulis_data;
  int banyakAK, banyakAG, banyakUG, banyakCG, banyakAR, jarak;
};
