#include <bits/stdc++.h>

using namespace std;

struct pesanTiket {
	int hargaTiket[1001] = {30000, 40000, 20000, 20000, 35000};
	int tglBrkt[1001] = {1, 1, 1, 1, 2};
	int bulan[1001] = {1, 1, 1, 1, 1};
	int tahun[2] = {2015};
	string nomorKa[1001] = {"PA-302", "TT-333", "ZZ-201", "NT-203", "PA-304"};
};

struct lihatJadwal {
    string tujuan[1001] = {"Surabaya", "Jakarta", "Solo", "Yogya", "Malang"};
    string stasiun[1001] = {"Stasiun Gubeng", "Stasiun Gambir", "Stasiun Balapan", "Stasiun diYogya", "Stasiun diMalang"};
    string 
    double waktu[1001] = {10.19, 20.00, 2.00};
    struct pesanTiket tiketNya;
};
    kereta tiket;
    
void welcome(char wcomeGreet[1001]) {
	cout<<wcomeGreet<<endl;
	cout<<"=================================="<<endl;
	
}

void menuAwal(int pilih) {
	cout<<"  Apa yang Anda ingin lakukan?  "<<endl;
	cout<<"1. Pesan Tiket"<<endl<<"2. Lihat Jadwal"<<endl<<"3. Info Lainnya"<<endl;
	system("pause");
	system("cls");
	cout<<endl;
	switch(pilih) {
		case 1 :
			cout<<"Infonecak"<<endl;
			break;
		case 2 :
			cout<<"Jadwale rung diatur mazzsseh!"<<endl;
			break;
		case 3 :
			cout<<"Dudu info lokeran mazzsseh!"<<endl;
			break;
		default: cout<<"Yang bener dong mazzsehh!"<<endl;
		
	}
}

void thanks() {
	cout<<"=============================================="<<endl;
	cout<<"  Terimakasih sudah menggunakan layanan ini  "<<endl;
	
}



int main() {
	welcome("  Selamat datang di Stasiun Waru  ");
	menuAwal(2);
	thanks();
	
}
