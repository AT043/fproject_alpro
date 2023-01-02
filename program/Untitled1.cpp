#include <bits/stdc++.h>

using namespace std;

struct identity {
	string nama;
	int jumlahTiket;
	long long noIdentitas;
};

struct tiket {
	int hargaTiket[1001] = {30000, 40000, 20000, 20000, 35000};
	string nominal[1001] = {"Rp 30.000", "Rp 40.000", "Rp 20.000", "Rp 20.000", "Rp 35.000"};
	int tglBrkt[1001] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10};
	int bulan[1001] = {1, 2, 3, 4, 5, 6, 7 , 8, 9, 10, 11, 12};
	int tahun = 2005;
	string nomorKa[1001] = {"PA-302", "TT-333", "ZZ-201", "NT-203", "PA-304"};
};

struct jadwal {
    string tujuan[1001] = {"Surabaya", "Jakarta", "Solo", "Yogya", "Malang"};
    string stasiun[1001] = {"Stasiun Gubeng", "Stasiun Gambir", "Stasiun Balapan", "Stasiun diYogya", "Stasiun diMalang"};
    string waktu[1001] = {"10.00", "20.00", "12.15", "14.00", "16.30"};
    struct identity customer;
    struct tiket tiketNya;
};
    jadwal pesanTiket;
    
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
			for (int i=0; i<5; i++) {
				cout<<"Nama dan No KA: "<< pesanTiket.tiketNya.nomorKa[i] <<" Tujuan: "<<pesanTiket.tujuan[i] <<"-"<<pesanTiket.stasiun[i]<<" Keberangkatan: "<< pesanTiket.waktu[i]<<endl;
			};
			
			thanks();
		} else if(menu==3) {
			cout<<"Blong"<<endl;
			thanks();
		} else {
			cout<<"Masukkan Anda tidak dikenal, tolong pilih sesuai angka 1 - 3 sesuai di daftar!"<<endl;
		}
	
	return 0;
}
