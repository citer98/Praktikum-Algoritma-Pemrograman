using namespace std;

class Output
{
public:
  void cetak()
  {
    cout << "==================" << endl;
    cout << "STRUK PEMBELANJAAN" << endl;
    cout << "==================" << endl;
    cout << "  Daftar Menu  " << endl;
    cout << "1) Ayam Geprek\t: 21000" << endl;
    cout << "2) Ayam Goreng\t: 17000" << endl;
    cout << "3) Udang Goreng\t: 19000" << endl;
    cout << "4) Cumi Goreng\t: 20000" << endl;
    cout << "5) Ayam Bakar\t: 25000" << endl;
    cout << "Yang dibeli      : \n";
    cout << " Ayam Geprek(AK) : " << data_file[4] << endl;
    cout << " Ayam Goreng(AG) : " << data_file[5] << endl;
    cout << " Udang Goreng(UG): " << data_file[6] << endl;
    cout << " Cumi Goreng(CG) : " << data_file[7] << endl;
    cout << " Ayam Bakar(AR)  : " << data_file[8] << endl;
    cout << " Harga pesanan        = " << data_file[0] << endl;
    cout << " diskon               = " << data_file[1] << endl;
    cout << " Ongkir               = " << data_file[2] << endl;
    cout << " Harga setelah diskon = " << data_file[3] << endl;
    cout << endl;
    cout << "*** Terima Kasih ***";
  }
  void getData()
  {
    ambil_data.open("api_data.txt");
    while (!ambil_data.eof())
    {
      ambil_data >> data_file[index];
      index += 1;
    }
    ambil_data.close();
  }

private:
  ifstream ambil_data;
  string data_file[30];
  int index = 0;
};
