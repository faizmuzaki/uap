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
      
			break;
		case 3:

		break;
	}
}
	while(menu !=4);
}
