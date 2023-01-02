#include <bits/stdc++.h>

using namespace std;

struct identity {
	string nama;
	int jumlahTiket;
	long long noIdentitas;
};

struct tiket {
	int hargaTiket[1001] = {30000, 40000, 20000, 20000, 35000};
	int tglBrkt[1001] = {1,2};
	int bulan[1001] = {1};
	int tahun[2] = {2015};
	string nomorKa[1001] = {"PA-302", "TT-333", "ZZ-201", "NT-203", "PA-304"};
};

/*struct jadwal {
    string tujuan[1001] = {"Surabaya", "Jakarta", "Solo", "Yogya", "Malang"};
    string stasiun[1001] = {"Stasiun Gubeng", "Stasiun Gambir", "Stasiun Balapan", "Stasiun diYogya", "Stasiun diMalang"};
    string 
    double waktu[1001] = {10.19, 20.00, 2.00};
    struct tiket tiketNya;
};
    kereta tiket;*/
    
void welcome() {
	cout<<" Selamat datang di sistem pemesanan tiket kereta \n";
	cout<<"           Stasiun 4379 Rengasdengklok      "<<endl;
	cout<<"=================================================="<<endl;
	
}

void menuAwal(int pilih) {
	cout<<"  Apa yang Anda cari?  "<<endl;
	cout<<"1. Pesan Tiket"<<endl<<"2. Lihat Jadwal"<<endl<<"3. Info Lainnya"<<endl;
	cout<<endl;
	/*switch(pilih) {
		case 1 :
			cout<<"Infonecak"<<endl;
			break;
		case 2 :
			cout<<"Jadwale rung diatur mazzsseh!"<<endl;
			break;
		case 3 :
			cout<<"Dudu info lokeran mazzsseh!"<<endl;
			break;
		default: cout<<"Silahkan pilih sesuai yang ada di daftar!"<<endl;
		
	}*/
	
}

void thanks() {
	cout<<"=============================================="<<endl;
	cout<<"  Terimakasih sudah menggunakan layanan ini  "<<endl;
	
}

int time() {
	// declaring argument of time()
	time_t my_time = time(NULL);

	// ctime() used to give the present time
	printf("waktu pesan: %s", ctime(&my_time));
	return 0;
}



int main() {
	welcome();
	
	int menu;
	menuAwal(menu);
	cin>>menu;
	system("cls");
	
		if (menu==1) {
			cout<<"Pilih Tujuan: "<<endl;
			time();
			thanks();
		} else if(menu==2) {
			cout<<"Nama dan No KA: TT-303 Ka Wilis Tujuan: xx Keberangkatan: 00"<<endl;
			thanks();
		} else if(menu==3) {
			cout<<"Blong"<<endl;
			thanks();
		} else {
			cout<<"Masukkan Anda tidak dikenal, tolong pilih sesuai angka 1 - 3 sesuai di daftar!"<<endl;
		}
	
	return 0;
}
