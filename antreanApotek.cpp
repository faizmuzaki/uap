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
	string obat[] = {"Paracetamol","Dekongestan","Ibuprofen"};
	int jumlahObat,hargaObat[] = {19000,59900,26008};
	int arrSize = sizeof(obat)/sizeof(obat[0]);
do{
	cout<<"1.Ambil Antrean\n2.Beli Obat\n3.Cek Antrean\n4.Exit\nMasukkan Menu : ";
	cin>>menu;	
	switch(menu){
		case 1:

		case 2:
      
			break;
		case 3:

		break;
	}
}
	while(menu !=4);
}
