#include <bits/stdc++.h>

using namespace std;

struct tiket {
	int hargaTiket[1001] = {50000, 35000, 30000, 30000, 35000};
	//string nominal[1001] = {"Rp 50.000", "Rp 35.000", "Rp 30.000", "Rp 30.000", "Rp 35.000"};
	string nama[1001];
	int jumlahTiket[1001];
	long long noIdentitas[1001];
};

struct jadwal {
	int tglBrkt[1001] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
	int bulan[1001] = {1, 2, 3, 4, 5, 6, 7 , 8, 9, 10, 11, 12};
	int tahun = 2023;
	string namaKa[1001] = {"Sriwijaya", "Rajabasa", "Prabu Jaya", "Serelo", "Sindang Marga"};
	string jenisKereta[1001] = {"Eksekutif Premium", "Ekonomi AC", "Eksekutif Bisnis", "Ekonomi AC", "Eksekutif Bisnis"};
    string tujuanPergi[1001] = {"Tanjungkarang(TNK)", "Kertapati(KPT)", "Kertapati(KPT)", "Kertapati(KPT)", "Lubuklinggau(LLG)"};
    string tujuanPulang[1001] = {"Kertapati(KPT)", "Tanjungkarang(TNK)", "Prabumulih(PBM)", "Lubuklinggau(LLG)", "Kertapati(KPT)"};
    string waktuPergi[1001] = {"10.00", "08.30", "12.15", "08.00", "19.45"};
    string waktuSampai[1001] = {"17.30", "17.30", "16.30", "13.00", "02.25" };
    struct tiket dataTiket;
};
    jadwal pesanTiket;
    
void welcome() {
	cout<<"=================================================="<<endl;
	cout<<" Selamat Datang di Sistem Pemesanan Tiket Kereta \n";
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
	cout<<"1. Kertapati(KPT)"<<endl<<"2. Prabumulih(PBM)"<<endl<<"3. Lubuklinggau(LLG)"<<endl<<"4. Tanjungkarang(TNK)"<<endl<<"5. Kembali"<<endl;
	cout<<endl;
}

void headerBar() {
	cout<<"=================================================="<<endl;
	cout<<"   Sistem Pemesanan Tiket Kereta  DIVREG III\n";
	cout<<"                Sumatera Selatan        "<<endl;
	cout<<"=================================================="<<endl;
}

void border() {
	cout<<"================================================"<<endl;
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
	
	bool back;
	do {
	
	welcome();
	int menu;
	menuAwal(menu);
	cin>>menu;
	system("cls");
	
	
	headerBar();
		if (menu==1) {
			int menuA;
			pilihStasiun(menuA);
			border();
			cin>>menuA;
			system("cls");
			
				headerBar();
				switch(menuA) {
			case 1 :
				int selectA;
				cout<<"Pesan tiket kereta ke: "<<endl;
				cout<<"1."<<pesanTiket.tujuanPergi[0]<<endl;
				cout<<"2."<<pesanTiket.tujuanPergi[4]<<endl;
				cout<<"3."<<pesanTiket.tujuanPulang[2]<<endl;
				border();
				cin>>selectA;
				system("cls");
					headerBar();
					if(selectA==1) {
						cout<<"Jadwal kereta terdekat: "<<endl;
						cout<<endl;
						cout<<pesanTiket.namaKa[0]<<"-"<<pesanTiket.jenisKereta[0]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tglBrkt[2]<<"-"<<pesanTiket.bulan[1]<<"-"<<pesanTiket.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[0]<<endl;
						cout<<endl;
						
						cout<<pesanTiket.namaKa[1]<<"-"<<pesanTiket.jenisKereta[1]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tglBrkt[3]<<"-"<<pesanTiket.bulan[1]<<"-"<<pesanTiket.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[1]<<endl;
						border();
						
					} else if(selectA==2) {
						cout<<"Jadwal kereta terdekat: "<<endl;
						cout<<pesanTiket.namaKa[4]<<"-"<<pesanTiket.jenisKereta[4]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tglBrkt[2]<<"-"<<pesanTiket.bulan[1]<<"-"<<pesanTiket.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[4]<<endl;
						cout<<endl;
						
						cout<<pesanTiket.namaKa[4]<<"-"<<pesanTiket.jenisKereta[3]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tglBrkt[3]<<"-"<<pesanTiket.bulan[1]<<"-"<<pesanTiket.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[3]<<endl;
						border();
					
					} else if(selectA==3) {
						cout<<"Jadwal kereta terdekat: "<<endl;
						cout<<pesanTiket.namaKa[2]<<"-"<<pesanTiket.jenisKereta[2]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tglBrkt[2]<<"-"<<pesanTiket.bulan[1]<<"-"<<pesanTiket.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[2]<<endl;
						cout<<endl;
						border();	
					}
					int pesen;
					cout<<"Pesan Tiket"<<endl;
					cout<<"1. "<<endl;
					cout<<"2. "<<endl;
					cout<<"3. "<<endl;
					cin>>pesen;
						system("cls");
						headerBar();
						if(pesen==1) {
							cout<<"Masukkan Nama Anda: "<<endl;
							cout<<"Masukkan No Identitas Anda: "<<endl;
							cout<<"Masukkan email Anda: "<<endl;
							cout<<"Masukkan jumlah tiket: "<<endl;
						}
				break;
			case 2 :
				int selectB;
				cout<<"Pesan tiket kereta ke: "<<endl;
				cout<<"1."<<pesanTiket.tujuanPergi[2]<<endl;
				border();
				cin>>selectB;
				system("cls");
					headerBar();
					if(selectB==1) {
						cout<<"Jadwal kereta terdekat: "<<endl;
						cout<<pesanTiket.namaKa[2]<<"-"<<pesanTiket.jenisKereta[2]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tglBrkt[2]<<"-"<<pesanTiket.bulan[1]<<"-"<<pesanTiket.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[2]<<endl;
						cout<<endl;
						
						
						//cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.namaKa[2]<<"-"<<pesanTiket.jenisKereta[2]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tglBrkt[4]<<"-"<<pesanTiket.bulan[1]<<"-"<<pesanTiket.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[2]<<endl;
						cout<<endl;
						
						border();
						
						cout<<"Pesan Tiket?"<<endl;
					} else {
						cout<<"Tidak ada dalam pilihan!"<<endl;
				 } 
				 
				break;
			case 3 :
				int selectC;
				cout<<"Pesan tiket kereta ke: "<<endl;
				//cout<<"1."<<pesanTiket.tujuanPergi[1]<<endl;
				//cout<<"2."<<pesanTiket.tujuanPergi[2]<<endl;
				cout<<"1."<<pesanTiket.tujuanPergi[3]<<endl;
				border();
				cin>>selectC;
				system("cls");
					headerBar();
					if(selectC==1) {
						cout<<"Jadwal kereta terdekat: "<<endl;
						cout<<pesanTiket.namaKa[3]<<"-"<<pesanTiket.jenisKereta[3]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tglBrkt[2]<<"-"<<pesanTiket.bulan[1]<<"-"<<pesanTiket.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[3]<<endl;
						cout<<endl;
						
						//cout<<"Kereta tersedia: "<<endl;
						cout<<pesanTiket.namaKa[4]<<"-"<<pesanTiket.jenisKereta[4]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tglBrkt[3]<<"-"<<pesanTiket.bulan[1]<<"-"<<pesanTiket.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[4]<<endl;
						cout<<endl;
						border();
						cout<<"Pesan Tiket?"<<endl;
					} 
				break;
			case 4 :
				int selectD;
				cout<<"Pesan tiket kereta ke: "<<endl;
				cout<<"1."<<pesanTiket.tujuanPergi[1]<<endl;
				border();
				cin>>selectD;
				system("cls");
					headerBar();
					if(selectD==1) {
						cout<<"Jadwal kereta terdekat: "<<endl;
						cout<<endl;
						cout<<pesanTiket.namaKa[1]<<"-"<<pesanTiket.jenisKereta[1]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tglBrkt[2]<<"-"<<pesanTiket.bulan[1]<<"-"<<pesanTiket.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[1]<<endl;
						cout<<endl;
						
						cout<<pesanTiket.namaKa[0]<<"-"<<pesanTiket.jenisKereta[0]<<endl;
						cout<<" Tanggal keberangkatan: "<<pesanTiket.tglBrkt[3]<<"-"<<pesanTiket.bulan[1]<<"-"<<pesanTiket.tahun<<endl;
						cout<<" Waktu Keberangkatan: "<<pesanTiket.waktuPergi[0]<<endl;
						
						border();
						cout<<"Pesan Tiket?"<<endl;
					}
				break;
			case 5 :
				int selectE;
				system("cls");
				back = true;
			break;
			default: cout<<"Silahkan pilih sesuai yang ada di daftar!"<<endl; back = true;
			}
		
			//time();
			thanks();
			
	/* 
	*
	*
	* Menu Informasi jadwal Keretanya ya
	*
	*/
	
	
		} else if(menu==2) {
			cout<<"Jadwal kereta bulan Januari: "<<endl;
			cout<<endl;
			
			for (int j=0; j<31; j++) {
				for (int i=0; i<5; i++) {
					
				if(j%2==0) {
				cout<<" Nama KA: "<< pesanTiket.namaKa[i] <<endl;
				cout<<" Asal: "<<pesanTiket.tujuanPulang[i] <<" Tujuan: "<<pesanTiket.tujuanPergi[i]<<endl;
				cout<<" Tanggal keberangkatan: "<<pesanTiket.tglBrkt[j]<<"-"<<pesanTiket.bulan[0]<<"-"<<pesanTiket.tahun<<endl;
				cout<<" Jam Keberangkatan: "<<pesanTiket.waktuPergi[i]<<endl;
				cout<<"\n";
				
				} else {
					cout<<" Nama KA: "<< pesanTiket.namaKa[i] <<endl;
					cout<<" Asal: "<<pesanTiket.tujuanPergi[i] <<" Tujuan: "<<pesanTiket.tujuanPulang[i]<<endl;
					cout<<" Tanggal keberangkatan: "<<pesanTiket.tglBrkt[j]<<"-"<<pesanTiket.bulan[0]<<"-"<<pesanTiket.tahun<<endl;
					cout<<" Jam Keberangkatan: "<<pesanTiket.waktuPergi[i]<<endl;
					cout<<"\n";
				}
				
			}
			
			
			}
			
			cout<<"\n";
			cout<<"======================================================\n";
			
			int backButton;
			cout<<"1. Kembali 2. Selesai"<<endl;
			cin>>backButton;
				if (backButton == 1) {
					cout<<"Kembalilah"<<endl;
				} else if (backButton == 2) {
					thanks();
					system("pause");
					return 0;
				}
			
		} else if(menu==3) {
			cout<<"Belum Kepikiran"<<endl;
			thanks();
		} else {
			cout<<"Masukkan Anda tidak dikenal, tolong pilih sesuai angka 1 - 3 sesuai di daftar!"<<endl;
			
		}
	} while(back = true);
	 
	
	
	
	return 0;
}
