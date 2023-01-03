#include <bits/stdc++.h>

using namespace std;

struct passanger {
	string nama;
	int jumlahTiket;
	long long noIdentitas;
};

struct tiket {
	int hargaTiket[1001] = {50000, 35000, 30000, 30000, 35000};
	//string nominal[1001] = {"Rp 50.000", "Rp 35.000", "Rp 30.000", "Rp 30.000", "Rp 35.000"};
	int tglBrkt[1001] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
	int bulan[1001] = {1, 2, 3, 4, 5, 6, 7 , 8, 9, 10, 11, 12};
	int tahun = 2023;
	string namaKa[1001] = {"Sriwijaya", "Rajabasa", "Prabu Jaya", "Serelo", "Sindang Marga"};
	string jenisKereta[1001] = {"Eksekutif Premium", "Ekonomi AC", "Eksekutif Bisnis", "Ekonomi AC", "Eksekutif Bisnis"};
};

struct jadwal {
    string tujuanPergi[1001] = {"Kertapati(KPT)", "Tanjungkarang(TNK)", "Prabumulih(PBM)", "Lubuklinggau(LLG)", "Kertapati(KPT)"};
    string tujuanPulang[1001] = {"Tanjungkarang(TNK)", "Kertapati(KPT)", "Kertapati(KPT)", "Kertapati(KPT)", "Lubuklinggau(LLG)"};
    string waktuPergi[1001] = {"10.00", "08.30", "12.15", "08.00", "19.45"};
    string waktuSampai[1001] = {"17.30", "17.30", "16.30", "13.00", "02.25" };
    struct passanger identity;
    struct tiket tiketNya;
};
    jadwal pesanTiket;
    
void welcome() {
	cout<<"=================================================="<<endl;
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
	cout<<"1. Kertapati(KPT)"<<endl<<"2. Prabumulih(PBM)"<<endl<<"3. Lubuklinggau(LLG)"<<endl<<"4. Tanjungkarang(TNK)";
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
	
	
	welcome();
		if (menu==1) {
			int menuA;
			pilihStasiun(menuA);
			cout<<"=================================================="<<endl;
			cin>>menuA;
			system("cls");
			
				welcome();
				switch(menuA) {
			case 1 :
				int selectA;
				cout<<"Pesan tiket kereta ke: "<<endl;
				cout<<"1."<<pesanTiket.tujuanPergi[1]<<endl;
				cout<<"2."<<pesanTiket.tujuanPergi[2]<<endl;
				cout<<"3."<<pesanTiket.tujuanPergi[3]<<endl;
				cout<<"=================================================="<<endl;
				cin>>selectA;
				system("cls");
					if(selectA==1) {
						cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.tiketNya.namaKa[1]<<"-"<<pesanTiket.tiketNya.jenisKereta[1]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tiketNya.tglBrkt[2]<<"-"<<pesanTiket.tiketNya.bulan[1]<<"-"<<pesanTiket.tiketNya.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[1]<<endl;
						cout<<endl;
						cout<<"Pesan Tiket?"<<endl;
					} else if(selectA==2) {
						cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.tiketNya.namaKa[2]<<"-"<<pesanTiket.tiketNya.jenisKereta[2]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tiketNya.tglBrkt[2]<<"-"<<pesanTiket.tiketNya.bulan[1]<<"-"<<pesanTiket.tiketNya.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[2]<<endl;
						cout<<endl;
						cout<<"Pesan Tiket?"<<endl;
					} else if(selectA==3) {
						cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.tiketNya.namaKa[3]<<"-"<<pesanTiket.tiketNya.jenisKereta[3]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tiketNya.tglBrkt[2]<<"-"<<pesanTiket.tiketNya.bulan[1]<<"-"<<pesanTiket.tiketNya.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[3]<<endl;
						cout<<endl;
						cout<<"=================================================="<<endl;
						cout<<"Pesan Tiket?"<<endl;
					}
				break;
			case 2 :
				int selectB;
				cout<<"Pesan tiket kereta ke: "<<endl;
				cout<<"1."<<pesanTiket.tujuanPergi[2]<<endl;
				cout<<"=================================================="<<endl;
				cin>>selectA;
				system("cls");
					if(selectA==1) {
						cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.tiketNya.namaKa[2]<<"-"<<pesanTiket.tiketNya.jenisKereta[2]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tiketNya.tglBrkt[2]<<"-"<<pesanTiket.tiketNya.bulan[1]<<"-"<<pesanTiket.tiketNya.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[2]<<endl;
						cout<<endl;
						
						cout<<"=================================================="<<endl;
						
						cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.tiketNya.namaKa[2]<<"-"<<pesanTiket.tiketNya.jenisKereta[2]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tiketNya.tglBrkt[4]<<"-"<<pesanTiket.tiketNya.bulan[1]<<"-"<<pesanTiket.tiketNya.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[2]<<endl;
						cout<<endl;
						
						cout<<"=================================================="<<endl;
						
						cout<<"Pesan Tiket?"<<endl;
					} else {
						cout<<"Tidak ada dalam pilihan!"<<endl;
				 } 
				 
				break;
			case 3 :
				int selectC;
				cout<<"Pesan tiket kereta ke: "<<endl;
				cout<<"1."<<pesanTiket.tujuanPergi[1]<<endl;
				cout<<"2."<<pesanTiket.tujuanPergi[2]<<endl;
				cout<<"3."<<pesanTiket.tujuanPergi[3]<<endl;
				cout<<"=================================================="<<endl;
				cin>>selectC;
				system("cls");
					if(selectC==1) {
						cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.tiketNya.namaKa[1]<<"-"<<pesanTiket.tiketNya.jenisKereta[1]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tiketNya.tglBrkt[2]<<"-"<<pesanTiket.tiketNya.bulan[1]<<"-"<<pesanTiket.tiketNya.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[1]<<endl;
						cout<<endl;
						cout<<"Pesan Tiket?"<<endl;
					} else if(selectC==2) {
						cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.tiketNya.namaKa[2]<<"-"<<pesanTiket.tiketNya.jenisKereta[2]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tiketNya.tglBrkt[2]<<"-"<<pesanTiket.tiketNya.bulan[1]<<"-"<<pesanTiket.tiketNya.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[2]<<endl;
						cout<<endl;
						cout<<"Pesan Tiket?"<<endl;
					} else if(selectC==3) {
						cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.tiketNya.namaKa[3]<<"-"<<pesanTiket.tiketNya.jenisKereta[3]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tiketNya.tglBrkt[2]<<"-"<<pesanTiket.tiketNya.bulan[1]<<"-"<<pesanTiket.tiketNya.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[3]<<endl;
						cout<<endl;
						cout<<"=================================================="<<endl;
						cout<<"Pesan Tiket?"<<endl;
					}
				break;
			case 4 :
				int selectD;
				cout<<"Pesan tiket kereta ke: "<<endl;
				cout<<"1."<<pesanTiket.tujuanPergi[1]<<endl;
				cout<<"2."<<pesanTiket.tujuanPergi[2]<<endl;
				cout<<"3."<<pesanTiket.tujuanPergi[3]<<endl;
				cout<<"=================================================="<<endl;
				cin>>selectD;
				system("cls");
					if(selectD==1) {
						cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.tiketNya.namaKa[1]<<"-"<<pesanTiket.tiketNya.jenisKereta[1]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tiketNya.tglBrkt[2]<<"-"<<pesanTiket.tiketNya.bulan[1]<<"-"<<pesanTiket.tiketNya.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[1]<<endl;
						cout<<endl;
						cout<<"Pesan Tiket?"<<endl;
					} else if(selectD==2) {
						cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.tiketNya.namaKa[2]<<"-"<<pesanTiket.tiketNya.jenisKereta[2]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tiketNya.tglBrkt[2]<<"-"<<pesanTiket.tiketNya.bulan[1]<<"-"<<pesanTiket.tiketNya.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[2]<<endl;
						cout<<endl;
						cout<<"Pesan Tiket?"<<endl;
					} else if(selectD==3) {
						cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.tiketNya.namaKa[3]<<"-"<<pesanTiket.tiketNya.jenisKereta[3]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tiketNya.tglBrkt[2]<<"-"<<pesanTiket.tiketNya.bulan[1]<<"-"<<pesanTiket.tiketNya.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[3]<<endl;
						cout<<endl;
						cout<<"=================================================="<<endl;
						cout<<"Pesan Tiket?"<<endl;
					}
				break;
			default: cout<<"Silahkan pilih sesuai yang ada di daftar!"<<endl;
			}
		
			//time();
			thanks();
		} else if(menu==2) {
			for (int i=0; i<5; i++) {
				cout<<" Nama KA: "<< pesanTiket.tiketNya.namaKa[i] <<endl;
				cout<<" Asal: "<<pesanTiket.tujuanPulang[i] <<" Tujuan: "<<pesanTiket.tujuanPergi[i]<<endl;
				cout<<" Tanggal keberangkatan: "<<pesanTiket.tiketNya.tglBrkt[1]<<"-"<<pesanTiket.tiketNya.bulan[1]<<"-"<<pesanTiket.tiketNya.tahun<<endl;
				cout<<" Jam Keberangkatan: "<<pesanTiket.waktuPergi[i]<<endl;
				cout<<"\n";
			};
			
			for (int i=0; i<5; i++) {
				cout<<" Nama KA: "<< pesanTiket.tiketNya.namaKa[i] <<endl;
				cout<<" Asal: "<<pesanTiket.tujuanPergi[i] <<" Tujuan: "<<pesanTiket.tujuanPulang[i]<<endl;
				cout<<" Tanggal keberangkatan: "<<pesanTiket.tiketNya.tglBrkt[2]<<"-"<<pesanTiket.tiketNya.bulan[1]<<"-"<<pesanTiket.tiketNya.tahun<<endl;
				cout<<" Jam Keberangkatan: "<<pesanTiket.waktuPergi[i]<<endl;
				cout<<"\n";
			};
			
			cout<<"\n";
			cout<<"======================================================\n";
			
			int backButton;
			cout<<"1. Kembali 2. Selesai"<<endl;
			cin>>backButton;
				if (backButton == 1) {
					cout<<"Kembalilah"<<endl;
				} else if (backButton == 2) {
					thanks();
				}
			
		} else if(menu==3) {
			cout<<"Belum Kepikiran"<<endl;
			thanks();
		} else {
			cout<<"Masukkan Anda tidak dikenal, tolong pilih sesuai angka 1 - 3 sesuai di daftar!"<<endl;
		}
	
	return 0;
}
