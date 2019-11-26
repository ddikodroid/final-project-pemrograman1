#include<iostream>
#include<iomanip>
#include<map>
using namespace std;

void jual_idr(string mata_uang, double saldo){
	map<string, float> rates;
	rates["USD"] = 14182.66;
	rates["SGD"] = 10410.75;
	rates["AUD"] = 9639.89;
	rates["EUR"] = 15678.24;
	rates["CNY"] = 2014.74;
	rates["GBP"] = 18340.89;
	rates["MYR"] = 3398.24;
	rates["JPY"] = 130.73;
		
	map<string, string> currency;
	currency["USD"] = "Dollar AS";
	currency["SGD"] = "Dollar Singapura";
	currency["AUD"] = "Dollar Australia";
	currency["EUR"] = "Euro";
	currency["CNY"] = "Yuan";
	currency["GBP"] = "Poundsterling";
	currency["MYR"] = "Ringgit";
	currency["JPY"] = "Yen";
	
	double hasil = saldo/rates[mata_uang];
	
	printf("Saldo Anda sebesar %.2f Rupiah", saldo);
	printf(" ditukar menjadi %.2f %s", hasil, currency[mata_uang].c_str());
	printf("\nTransaksi Berhasil!");
}

void beli_idr(string mata_uang, double saldo){
	map<string, float> rates;
	rates["USD"] = 14029.50;
	rates["SGD"] = 10296.13;
	rates["AUD"] = 9527.43;
	rates["EUR"] = 15520.84;
	rates["CNY"] = 1996.23;
	rates["GBP"] = 18120.50;
	rates["MYR"] = 3366.00;
	rates["JPY"] = 129.10;
		
	map<string, string> currency;
	currency["USD"] = "Dollar AS";
	currency["SGD"] = "Dollar Singapura";
	currency["AUD"] = "Dollar Australia";
	currency["EUR"] = "Euro";
	currency["CNY"] = "Yuan";
	currency["GBP"] = "Poundsterling";
	currency["MYR"] = "Ringgit";
	currency["JPY"] = "Yen";
	
	double hasil= saldo*rates[mata_uang];
	
	printf("Saldo Anda sebesar %.2f %s", saldo, currency[mata_uang].c_str());
	printf(" ditukar menjadi %.2f Rupiah", hasil);
	printf("\n");
	printf("\nTransaksi Berhasil!");
}

void penjelasan(){
	cout << "\nKode Mata Uang: USD, SGD, AUD, EUR, CNY, GBP, MYR, JPY.";
	cout << "\n";
	cout << "\nKeterangan    : USD = Dollar AS, SGD = Dollar Singapura," << endl;
	cout << "                 AUD = Dollar Australia, EUR = Euro, CNY = Yuan," << endl;
	cout << "                 GBP = Poundsterling, MYR = Ringgit, JPY = Yen." << endl;
}

int main(){
	cout << "Selamat Datang di Aplikasi Konversi Mata Uang." << endl;
	cout << "==============================================" << endl;
	LOOP: cout << "Silakan Pilih Jenis Transaksi." << endl;
	cout << "1. IDR ke Mata Uang Lain.\n" << "2. Mata Uang Lain ke IDR.";
	cout << "\nPilihan : ";
	int choice;
	cin >> choice;
	
	string kode;
	double saldo;

	switch(choice){
		case 1:
			cout << "\nTransaksi IDR ke Mata Uang Lain." << endl;
			penjelasan();
			cout << "\n";
			cout << "Pilih Kode Mata Uang     : ";
			cin  >> kode;
			cout << "Banyaknya Penukaran (IDR): ";
			cin  >> saldo;
			jual_idr(kode, saldo);
			break;
		case 2:
			cout << "\nTransaksi Mata Uang Lain ke IDR." << endl;
			penjelasan();
			cout << "\n";
			cout << "Pilih Kode Mata Uang : ";
			cin  >> kode;
			cout << "Banyaknya Penukaran  : ";
			cin  >> saldo;
			beli_idr(kode, saldo);
			break;
		default : 
			cout << "Error! Pilihan tidak tersedia. Kembali ke menu awal." << endl;
            goto LOOP;
			break;
	}
	
}