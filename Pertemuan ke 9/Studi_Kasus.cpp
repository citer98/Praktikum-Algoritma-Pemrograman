#include <iostream>
using namespace std;

class Rak{
  public:
  void input(); 
  void proses();
  void output();
  
  private:
  int n, brs, klm;
  int b;
  int data[24];
  int dat[10][10];
	
};

void Rak::input()
{
	cout<<"Buku yang ingin didata: ";
	cin>>n;
	//Proses pemasukan bilangan
	for(int i=0; i<n; i++)
	{
		cout<<"data ke-"<<i<<" = ";
		cin>>data[i];
	}
	//Proses penampilan array 1 dimensi
	for(int j=0; j<n; j++)
	{
		cout<<data[j]<<" ";
	}
}

void Rak::proses()
{	
	//sorting data 
  	int temp;
	int s = n;
	int batas = s - 1;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < batas; j++)
		{
			if (data[j] > data[j + 1])
			{
				temp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = temp;
			}
		}
		batas -= 1;
	}
	//
	cout<<"\n\n";
}

void Rak::output()
{
	cout<<"Masukan banyak kolom rak buku: ";
	cin>>klm;
	cout<<"Masukan banyak baris rak buku: ";
	cin>>brs;
	
	//proses pengubahan array 1 dimensi menjadi 2 dimensi
	int k = 0;
  	for (int i = 0; i <brs; i++) {
    for (int j = 0; j < klm; j++) {
      dat[i][j] = data[k];
      k++;
    }
  }
	//proses menampilkan array 2 dimesi
	for(int k=0; k<brs; k++)
	{
		for(int l=0; l<klm; l++)
    	{
    		cout<<dat[k][l]<<" ";
		}
	cout<<endl;
	}
	
}

int main()
{
	Rak data;
  
	data.input();
	cout << endl;

	data.proses();
	cout<<endl;
	
	data.output();
	cout<<endl;
	
  	return 0;
}
