#include <iostream>
#include <queue>
#include <conio.h>
#include <windows.h>
using namespace std;

void cekAntrean(queue<string> qu){
	queue<string> q = qu;
	int number = 1;
	if(!q.empty()){
	while(!q.empty()){
		cout<<number<<". "<<q.front()<<"\n";
		q.pop();
		number++;
	}
	}else{
		cout<<"Antrian kosong!";
		getch();
	}
	cout<<"\n";
}

int main(){
	int menu,pilihMenu;
	string nama;
	queue<string> q;
	string Menu[] = {"Classic Pancake","Croffle","Nachos","Potato Wedges","Loco Moco"};
	int jumlahMenu,hargaMenu[] = {30000,45000,50000,35000,45000};
	int arrSize = sizeof(Menu)/sizeof(Menu[0]);
	
do{
	cout << "-----------------------------------------------------------------" << endl;
	cout << "                           Bubble Cafe                           "<< endl;
 	cout << "-----------------------------------------------------------------" << endl;
	cout<<"1.Ambil Antrean\n2.Pilih Menu\n3.Cek Antrean\n4.Exit\nMasukkan Pilihan : ";
	cin>>menu;	
	switch(menu){
		case 1:
			cout<<"Masukkan Nama anda : ";
			cin>>nama;
			q.push(nama);
			getch();
			break;
			
		case 2:
      			if(!q.empty()){
			cout<<"\nHarga Menu: \n";
			for(int i = 0; i<arrSize; i++)
				cout<<i+1<<". "<<Menu[i]<<" : "<<hargaMenu[i]<<endl;
			cout<<endl;
			cout<<"Silahkan customer atas nama "<<q.front()<<" memilih menu\n";
			cout<<"Pilih obat : ";	
			cin>>pilihMenu;
			cout<<"Masukkan Jumlah Menu : ";
			cin>>jumlahMenu;
			system("cls");
			cout<<"Struk Pembayaran \n";
			cout<<"Nama Pemesan : "<<q.front();
			cout<<"\nNama Menu : "<<Menu[pilihMenu-1];
			cout<<"\nJumlah Menu : "<<jumlahMenu;
			cout<<"\nHarus Dibayar : "<<hargaMenu[pilihMenu-1]*jumlahMenu;
			cout<<"\nBerhasil melakukan pemesanan, data akan dikurangi\nyou will redirect in 3 seconds";
			q.pop();
			Sleep(3000);
			system("cls");
			}else{
				cout<<"Antrian kosong!\n";
				getch();
			}
			break;
			
		case 3:
			cekAntrean(q);
		break;
	}
}
	while(menu !=4);
}
