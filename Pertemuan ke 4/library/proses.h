using namespace std;

class Proses {
public:
  void cetak() { cout << "Anda sebagai Proses \n"; }

  void getData() {
    ambil_data.open("pradata/api_data.txt");
    bool pendapatan1 = true, pendapatan2 = true, pendapatan3 = true,
         pendapatan4 = true, pendapatan5 = true, pendapatan6 = true,
         pendapatan7 = true, pendapatan8 = true, pendapatan9 = true,
         pendapatan10 = true, pendapatan11 = true, pendapatan12 = true;
    bool pengeluaran1 = true, pengeluaran2 = true, pengeluaran3 = true,
         pengeluaran4 = true, pengeluaran5 = true, pengeluaran6 = true,
         pengeluaran7 = true, pengeluaran8 = true, pengeluaran9 = true,
         pengeluaran10 = true, pengeluaran11 = true, pengeluaran12 = true;
    while (!ambil_data.eof()) {
      if (pendapatan1 == true) {
        ambil_data >> bnyk_pndpt[0];
        pendapatan1 = false;
      } else if (pendapatan2 == true) {
        ambil_data >> bnyk_pndpt[1];
        pendapatan2 = false;
      } else if (pendapatan3 == true) {
        ambil_data >> bnyk_pndpt[2];
        pendapatan3 = false;
      } else if (pendapatan4 == true) {
        ambil_data >> bnyk_pndpt[3];
        pendapatan4 = false;
      } else if (pendapatan5 == true) {
        ambil_data >> bnyk_pndpt[4];
        pendapatan5 = false;
      } else if (pendapatan6 == true) {
        ambil_data >> bnyk_pndpt[5];
        pendapatan6 = false;
      } else if (pendapatan7 == true) {
        ambil_data >> bnyk_pndpt[6];
        pendapatan7 = false;
      } else if (pendapatan8 == true) {
        ambil_data >> bnyk_pndpt[7];
        pendapatan8 = false;
      } else if (pendapatan9 == true) {
        ambil_data >> bnyk_pndpt[8];
        pendapatan9 = false;
      } else if (pendapatan10 == true) {
        ambil_data >> bnyk_pndpt[9];
        pendapatan10 = false;
      } else if (pendapatan11 == true) {
        ambil_data >> bnyk_pndpt[10];
        pendapatan11 = false;
      } else if (pendapatan12 == true) {
        ambil_data >> bnyk_pndpt[11];
        pendapatan12 = false;
      } else if (pengeluaran1 == true) {
        ambil_data >> bnyk_pnglrn[0];
        pengeluaran1 = false;
      } else if (pengeluaran2 == true) {
        ambil_data >> bnyk_pnglrn[1];
        pengeluaran2 = false;
      } else if (pengeluaran3 == true) {
        ambil_data >> bnyk_pnglrn[2];
        pengeluaran3 = false;
      } else if (pengeluaran4 == true) {
        ambil_data >> bnyk_pnglrn[3];
        pengeluaran4 = false;
      } else if (pengeluaran5 == true) {
        ambil_data >> bnyk_pnglrn[4];
        pengeluaran5 = false;
      } else if (pengeluaran6 == true) {
        ambil_data >> bnyk_pnglrn[5];
        pengeluaran6 = false;
      } else if (pengeluaran7 == true) {
        ambil_data >> bnyk_pnglrn[6];
        pengeluaran7 = false;
      } else if (pengeluaran8 == true) {
        ambil_data >> bnyk_pnglrn[7];
        pengeluaran8 = false;
      } else if (pengeluaran9 == true) {
        ambil_data >> bnyk_pnglrn[8];
        pengeluaran9 = false;
      } else if (pengeluaran10 == true) {
        ambil_data >> bnyk_pnglrn[9];
        pengeluaran10 = false;
      } else if (pengeluaran11 == true) {
        ambil_data >> bnyk_pnglrn[10];
        pengeluaran11 = false;
      } else if (pengeluaran12 == true) {
        ambil_data >> bnyk_pnglrn[11];
        pengeluaran12 = false;
      }
    }
    ambil_data.close();
  }
  void toFile() {
    for(int i = 0; i<12;i++){
      pendapatan += bnyk_pndpt[i];
    }
    for(int i = 0; i<12;i++){
      pengeluaran += bnyk_pnglrn[i];
    }
    int tabungan = pendapatan - pengeluaran;

    tulis_data.open("pradata/api_data.txt");
    tulis_data << pendapatan << endl;
    tulis_data << pengeluaran << endl;
    tulis_data << tabungan;
    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  int bnyk_pndpt[12];
  int bnyk_pnglrn[12];
  int pendapatan = 0;
  int pengeluaran = 0;
  int x, n;
};
