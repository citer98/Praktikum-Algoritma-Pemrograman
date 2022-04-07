using namespace std;
class Proses
{
public:
	void cetak()
	{
		cout << "Anda sebagai Proses \n";
	}
	void getData()
	{
		ambil_data.open("api_data.txt");
		bool AK = true;
		bool AG = true;
		bool CG = true;
		bool UG = true;
		bool AR = true;
		while (!ambil_data.eof())
		{
			if (AK == true)
			{
				ambil_data >> jumlahAK;
				AK = false;
			}
			else if (AG == true)
			{
				ambil_data >> jumlahAG;
				AG = false;
			}
			else if (UG == true)
			{
				ambil_data >> jumlahUG;
				UG = false;
			}
			else if (CG == true)
			{
				ambil_data >> jumlahCG;
				CG = false;
			}
			else if (AR == true)
			{
				ambil_data >> jumlahAR;
				AR = false;
			}
			else
			{
				ambil_data >> jarakRumah;
			}
		}
		ambil_data.close();
	}
	void toFile()
	{
		int total = (hargaAK * jumlahAK) + (hargaAG * jumlahAG) + (hargaUG * jumlahUG) + (hargaAR * jumlahAR) + (hargaCG * jumlahCG);
		float hargaFinal;
		float batas1 = 25000;
		float batas2 = 50000;
		float batas3 = 150000;

		// Ongkir
		if (jarakRumah > 3)
		{
			ongkir = 25000;
		}
		else if (jarakRumah <= 3 && jarakRumah > 0)
		{
			ongkir = 15000;
		}

		// Diskon
		float diskon = 0;
		float hargaDiskon = float(total);
		if (total > batas3)
		{
			diskon = 0.35;
			hargaDiskon = total * diskon;
		}
		else if (total > batas2)
		{
			diskon = 0.15;
			hargaDiskon = total * diskon;
		}

		if (total >= batas3)
		{
			ongkir = ongkir - 8000;
			hargaFinal = ongkir + (total - hargaDiskon);
			cout << "ongkir : " << ongkir << endl;
		}
		else if (total >= batas2)
		{
			ongkir = ongkir - 8000;
			hargaFinal = ongkir + (total - hargaDiskon);
		}
		else if (total >= batas1)
		{
			ongkir = ongkir - 8000;
			hargaFinal = ongkir + total;
			cout << "ongkir : " << ongkir << endl;
		}
		else
		{
			hargaFinal = ongkir + total;
		}

		// output
		tulis_data.open("api_data.txt");
		tulis_data << total << endl;
		tulis_data << hargaDiskon << endl;
		tulis_data << ongkir << endl;
		tulis_data << hargaFinal << endl;
		tulis_data << jumlahAK << endl;
		tulis_data << jumlahAG << endl;
		tulis_data << jumlahUG << endl;
		tulis_data << jumlahCG << endl;
		tulis_data << jumlahAR;
		tulis_data.close();
	}

private:
	ifstream ambil_data;
	ofstream tulis_data;
	int jumlahAK;
	int jumlahAG;
	int jumlahUG;
	int jumlahCG;
	int jumlahAR;
	int hargaAK = 21000;
	int hargaAG = 17000;
	int hargaUG = 19000;
	int hargaCG = 20000;
	int hargaAR = 25000;
	int ongkir = 15000;
	int jarakRumah;
};
