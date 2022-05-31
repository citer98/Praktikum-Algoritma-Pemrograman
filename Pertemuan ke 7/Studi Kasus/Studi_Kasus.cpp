#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

class data
{
	public:
		int input();
		int proses();
		int output();
		
	private:
	typedef struct
	{
		int kd;
		char nm[20];
		int stck;
	}
	brg;
	brg barang[5];
	brg lok[5];
	brg temp;
	int n,i,b, cari, ada;
};

int data::input()
{
	cout<<"=================================================================================="<<endl;
	cout<<"|            PROGRAM SORTING (Descending) DAN SEARCHING BARANG GUDANG            |"<<endl;
	cout<<"=================================================================================="<<endl;

	cout<<"Masukan banyak data: ";
	cin>>n;

 	for(i=0;i<n;i++)
	{
    	cout<<endl;
    	cout<<"Data ke-"<<(i+1)<<":"<<endl;
    	cout<<"Input Kode Barang : ";cin>>barang[i].kd;
    	cout<<"Input Nama Barang : ";cin>>gets(barang[i].nm);
    	cout<<"Input Stock Barang: ";cin>>barang[i].stck;
    	cout<<endl;
    }
	cout<<"Data Barang Anda"<<endl;
    cout<<"================================================="<<endl;
    cout<<"|   Kode Barang  |  Nama Barang  | Stock Barang |"<<endl;
	cout<<"================================================="<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<"|       "<<barang[i].kd<<"\t\t"<<barang[i].nm<<"\t\t "<<barang[i].stck<<"      |"<<endl;
	}
    cout<<"================================================="<<endl;
      
}

int data::proses()
{
	for(i=0;i<n;i++)
	{
    	for(b=0;b<n-1;b++)
		{
            if(barang[b].stck < barang[b+1].stck)
			{
            	temp.kd=barang[b].kd;
            	barang[b].kd=barang[b+1].kd;
            	barang[b+1].kd=temp.kd;
            	strcpy(temp.nm,barang[b].nm);
            	strcpy(barang[b].nm,barang[b+1].nm);
            	strcpy(barang[b+1].nm,temp.nm);

            	temp.stck=barang[b].stck;
            	barang[b].stck=barang[b+1].stck;
            	barang[b+1].stck=temp.stck;
            }
        }
    }
    cout<<endl;
    cout<<endl;
}
          
int data::output()
{
	cout<<"Setelah data diurutkan berdasarkan kode terkecil : "<<endl;
    cout<<"=================================================="<<endl;
    cout<<"|  Kode Barang  |  Nama Barang  |  Stock Barang  |"<<endl;
    cout<<"=================================================="<<endl;

    for(b=0;b<n;b++)
	{
    	cout<<"|      "<<barang[b].kd<<"\t\t"<<barang[b].nm<<"\t\t"<<barang[b].stck<<"        |"<<endl;
    }
    cout<<"=================================================="<<endl;
    cout<<endl;
    cout<<"Masukan Kode Barang Untuk Mencari : ";
    cin>>cari;
    ada = 0;
    for(b=0;b<n;b++)
        {
        	if(barang[b].kd==cari)
            {
                ada=1;
                cout<<"=================================================="<<endl;
      		   	cout<<"|  Kode Barang  |  Nama Barang  |  Stock Barang  |"<<endl;
    			cout<<"=================================================="<<endl;
                cout<<"|      "<<barang[b].kd<<"\t\t"<<barang[b].nm<<"\t\t"<<barang[b].stck<<"        |"<<endl;
            }
        }
        cout<<"=================================================="<<endl;
        if (ada == 0)
        {
            cout<<"Data Tidak ditemukan"<<endl;
        }
        getch();
}
int main()
{
	data A;
	A.input();
	A.proses();
	A.output();
	
	return 0;
}
