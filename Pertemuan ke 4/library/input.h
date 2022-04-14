using namespace std;

class Input {
	public :
		void cetak(){
      for(a = 0; a < 12; a++){
        cout << "Pendapatan bulanan -> "; cin >> bnyk_pndpt[a];
        cout << "Pengeluaran bulanan-> "; cin >> bnyk_pnglrn[a];
        cout << "-------------------" << endl;
      }
		}

		void toFile(){
			tulis_data.open("pradata/api_data.txt");
      for(a = 0; a < 12; a++){
        tulis_data << bnyk_pndpt[a]<< endl;
      }
      for(a = 0; a < 12; a++){
        if(a < 11){
          tulis_data << bnyk_pnglrn[a] << endl;
        } else {
          tulis_data << bnyk_pnglrn[a];
        }
      }
			tulis_data.close();
		}

	private :
		ofstream tulis_data;
		int bnyk_pndpt[12], bnyk_pnglrn[12];
    int a;
};
