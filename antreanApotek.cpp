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
	int menu,pilihObat;
	string nama;
	queue<string> q;
	string obat[] = {"Classic Pancake","Croffle","Nachos","Potato Wedges","Loco Moco"};
	int jumlahObat,hargaObat[] = {30000,45000,50000,35000,45000};
	int arrSize = sizeof(obat)/sizeof(obat[0]);
do{
	cout << "-----------------------------------------------------------------" << endl;
	cout << "                         Menu Cafe                      "<< endl;
 	cout << "-----------------------------------------------------------------" << endl;
	cout<<"1.Ambil Antrean\n2.Pilih Menu\n3.Cek Antrean\n4.Exit\nMasukkan Menu : ";
	cin>>menu;	
	switch(menu){
		case 1:
			cout<<"Masukkan Nama anda : ";
			cin>>nama;
			q.push(nama);
			getch();
			break;
		case 2:
      
			break;
		case 3:

		break;
	}
}
	while(menu !=4);
}
