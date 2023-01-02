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
	int tglBrkt[1001] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
	int bulan[1001] = {1, 2, 3, 4, 5, 6, 7 , 8, 9, 10, 11, 12};
	int tahun = 2005;
	string namaKa[1001] = {"Sriwijaya", "Rajabasa", "Prabu Jaya", "Serelo", "Sindang Marga"};
	string jenisKereta[1001] = {"Eksekutif Premium", "Ekonomi AC", "Eksekutif Bisnis", "Ekonomi AC", "Eksekutif Bisnis"};
};

struct jadwal {
    string tujuanPergi[1001] = {"Kertapati(KPT)", "Kertapati(KPT)", "Prabumulih(PBM)", "Lubuklinggau(LLG)", "Lubuklinggau(LLG)"};
    string tujuanPulang[1001] = {"Tanjungkarang(TNK)", "Tanjungkarang(TNK)", "Kertapati(KPT)", "Kertapati(KPT)", "Kertapati(KPT)"};
    string waktuPergi[1001] = {"10.00", "11.00", "12.15", "08.00", "08.30"};
    string waktuPulang[1001] = {"16.00", "17.00", "16.30", "13.00", "14.00" };
    struct identity customer;
    struct tiket tiketNya;
};
    jadwal pesanTiket;
    
void welcome() {
	cout<<" Selamat datang di sistem pemesanan tiket kereta \n";
	cout<<"          DIVREG III Sumatera Selatan     "<<endl;
	cout<<"=================================================="<<endl;
	
}

void menuAwal(int pilih) {
	cout<<"  Apa yang Anda cari?  "<<endl;
	cout<<"1. Pesan Tiket"<<endl<<"2. Lihat Jadwal"<<endl<<"3. Info Lainnya"<<endl;
	cout<<endl;
	
}

void pilihStasiun(int choose) {
	cout<<" Pilih Stasiun Keberangkatan: "<<endl;
	cout<<"1. Tanjungkarang(TNK)"<<endl<<"2. Prabumulih(PBM)"<<endl<<"3. Lubuklinggau(LLG)"<<endl<<"4. Kertapati(KPT)";
	cout<<endl;
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
			int menuA;
			pilihStasiun(menuA);
			cin>>menuA;
			
				switch(menuA) {
			case 1 :
				int selectA;
				cout<<"Pesan tiket kereta ke: "<<endl;
				cout<<"1."<<pesanTiket.tujuanPergi[2]<<endl;
				cout<<"2."<<pesanTiket.tujuanPergi[4]<<endl;
				cin>>selectA;
					if(selectA==1) {
						cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.tiketNya.namaKa[1]<<"-"<<pesanTiket.tiketNya.jenisKereta[1]<<endl;
						cout<<"jadwal: "<<pesanTiket.waktuPergi[1]<<endl;
					} else if(selectA==2) {
						cout<<"Kereta tersedia: "<<endl;
					}
				break;
			case 2 :
				cout<<"Pesan tiket kereta ke:"<<endl;
				break;
			case 3 :
				cout<<"Pesan tiket kereta ke: "<<endl;
				break;
			case 4 :
				cout<<"Pesan tiket kereta ke: "<<endl;
				break;
			default: cout<<"Silahkan pilih sesuai yang ada di daftar!"<<endl;
			}
		
			time();
			thanks();
		} else if(menu==2) {
			for (int i=0; i<5; i++) {
				cout<<" Nama dan No KA: "<< pesanTiket.tiketNya.namaKa[i] <<endl;
				cout<<" Asal: Kertapati(KPT)" <<" Tujuan: "<<pesanTiket.tujuanPergi[i]<<endl;
				cout<<" Keberangkatan: "<<pesanTiket.waktuPergi[i]<<endl;
				cout<<"\n";
			};
			
			for (int i=0; i<5; i++) {
				cout<<" Nama dan No KA: "<< pesanTiket.tiketNya.namaKa[i] <<endl;
				cout<<" Asal: Kertapati(KPT)" <<" Tujuan: "<<pesanTiket.tujuanPulang[i]<<endl;
				cout<<" Keberangkatan: "<<pesanTiket.waktuPulang[i]<<endl;
				cout<<"\n";
			};
			
			int backButton;
			cout<<"1. Kembali 2. Selesai"<<endl;
			cin>>backButton;
				if (backButton == 1) {
					cout<<"Kembalilah"<<endl;
				} else if (backButton == 2) {
					thanks();
				}
			
		} else if(menu==3) {
			cout<<"Blong"<<endl;
			thanks();
		} else {
			cout<<"Masukkan Anda tidak dikenal, tolong pilih sesuai angka 1 - 3 sesuai di daftar!"<<endl;
		}
	
	return 0;
}
