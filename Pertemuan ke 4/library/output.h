using namespace std;

class Output {
	public :
		void cetak(){
	cout << "================================================================\n";
	cout << "==================== AKUMULASI TABUNGAN ========================\n ";
	cout << "================================================================\n";
	cout << "\n";
	cout << "Pendapatan selama 12 bulan : " << data_file[0] << endl;
	cout << "Pengeluaran selama 12 bulan: " << data_file[1] << endl;
	cout << "Jumlah uang yang ditabung  : " << data_file[2] << endl;
	cout << "---------------------------------------------------------------\n";
      }

		void getData(){
			ambil_data.open("pradata/api_data.txt");
			while(!ambil_data.eof()){
				ambil_data >> data_file[index];
				index += 1;
			}
			ambil_data.close();
		}

	private :
		ifstream ambil_data;
    string data_file[30];
		int index = 0;
};
