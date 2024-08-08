/* Biodata Diri
Program		:	Program Aplikasi ATM Sederhana
Programmer	:	Muhammad Iqbal Burhanuddin
NIM			:	2203015041
Universitas Muhammadiyah Prof. Dr. HAMKA
*/
#include <iostream>
#include <conio.h>
// Nama Mu
using namespace std;
int main(){
	//inisialisasi
	int pin,pilih,kode,s,transfer,ambil,no;
	cout<<" ATM UHAMKA SYARIAH"<<endl;
	cout<<"Silahkan Masukkan PIN : ";
	cin>>pin;
	cout<<"=========================="<<endl;
	//User 1 dengan pin 123456 yang bernama RIAN
	if(pin==123456){
		cout<<"User : Rian"<<endl;
		cout<<" 1. CEK SALDO"<<endl;
		cout<<" 2. PENGAMBILAN UANG"<<endl;
		cout<<" 3. TRANSFER"<<endl;
		cout<<"Masukkan pilihan anda :";
		cin>>pilih;
		cout<<'\n';
		//Struktur percabangan if untuk memilih yang ingin dikerjakan
		if(pilih==1){	//jika memilih cek saldo
		cout<<"Saldo anda Rp. 1.000.000"<<endl;}
		if(pilih==2){	//jika memilih pengambilan uang
		cout<<"1. Rp. 50.000		4. Rp. 500.000"<<endl;
		cout<<"2. Rp. 100.000		5. Masukan jumlah lain"<<endl;
		cout<<"3. Rp. 200.000"<<endl;
		cout<<'\n'<<"Masukkan pilihan anda :";
		cin>>kode;
		switch(kode){	//Struktur percabangan switch-case
		case 1:
			cout<<"Anda Mengambil Uang Sebesar Rp.50.000"<<endl;
			s=1000000-50000;
			cout<<"Sisa Saldo Rp. "<<s<<endl;
			break;
		case 2:
			cout<<"Anda Mengambil Uang Sebesar Rp. 100.000"<<endl;
			s=1000000-100000;
			cout<<"Sisa Saldo Rp. "<<s<<endl;
			break;
		case 3:
			cout<<"Anda Mengambil Uang Sebesar Rp. 200.000"<<endl;
			s=1000000-200000;
			cout<<"Sisa Saldo Rp. "<<endl;
			break;
		case 4:
			cout<<"Anda Mengambil Uang Sebesar Rp. 500.000"<<endl;
			s=1000000-500000;
			break;
		case 5:
			cout<<"Masukkan saldo yang ingin diambil: Rp. ";
			cin>>ambil;
			s=1000000-ambil;
			cout<<"Sisa Saldo Rp. "<<s<<endl;
			break;
		default:
			cout<<"Kode yang anda masukkan tidak ada"<<endl;}}
		if(pilih==3){	//jika memilih transfer
		cout<<"Masukan No Rekening";
		cin>>no;
		cout<<"Masukan saldo yang mau di transfer: Rp. ";
		cin>>transfer;
		s=1000000-transfer;
		cout<<"\nNo Rekening: "<<no<<endl;
		cout<<"Jumlah Transfer: Rp. "<<transfer<<endl;
		cout<<"=========================="<<endl;
		cout<<"Sisa Saldo Rp. "<<s<<endl;}
}
	//User 1 dengan pin 170301 yang bernama DIMAS
	if(pin==170301){
		cout<<"User : Dimas"<<endl;
		cout<<" 1. CEK SALDO"<<endl;
		cout<<" 2. PENGAMBILAN UANG"<<endl;
		cout<<" 3. TRANSFER"<<endl;
		cout<<"Masukkan pilihan anda :";
		cin>>pilih;
		cout<<'\n';
		//Struktur percabangan if untuk memilih yang ingin dikerjakan
		if(pilih==1){	//jika memilih cek saldo
		cout<<"Saldo anda Rp. 750.000"<<endl;}
		if(pilih==2){	//jika memilih pengambilan uang
		cout<<"1. Rp. 50.000		4. Rp. 500.000"<<endl;
		cout<<"2. Rp. 100.000		5. Masukan jumlah lain"<<endl;
		cout<<"3. Rp. 200.000"<<endl;
		cout<<'\n'<<"Masukkan pilihan anda :";
		cin>>kode;
		switch(kode){	//Struktur percabangan switch-case
		case 1:
			cout<<"Anda Mengambil Uang Sebesar Rp.50.000"<<endl;
			s=750000-50000;
			cout<<"Sisa Saldo Rp. "<<s<<endl;
			break;
		case 2:
			cout<<"Anda Mengambil Uang Sebesar Rp. 100.000"<<endl;
			s=750000-100000;
			cout<<"Sisa Saldo Rp. "<<s<<endl;
			break;
		case 3:
			cout<<"Anda Mengambil Uang Sebesar Rp. 200.000"<<endl;
			s=7500000-200000;
			cout<<"Sisa Saldo Rp. "<<endl;
			break;
		case 4:
			cout<<"Anda Mengambil Uang Sebesar Rp. 500.000"<<endl;
			s=7500000-500000;
			break;
		case 5:
			cout<<"Masukkan saldo yang ingin diambil: Rp. ";
			cin>>ambil;
			s=7500000-ambil;
			cout<<"Sisa Saldo Rp. "<<s<<endl;
			break;
		default:
			cout<<"Kode yang anda masukkan tidak ada"<<endl;}}
		if(pilih==3){	//jika memilih transfer
		cout<<"Masukan No Rekening";
		cin>>no;
		cout<<"Masukan saldo yang mau di transfer: Rp. ";
		cin>>transfer;
		s=7500000-transfer;
		cout<<"\nNo Rekening: "<<no<<endl;
		cout<<"Jumlah Transfer: Rp. "<<transfer<<endl;
		cout<<"=========================="<<endl;
		cout<<"Sisa Saldo Rp. "<<s<<endl;}
	}
	//User 1 dengan pin 654321 yang bernama RIFAN
	if(pin==654321){
		cout<<"User : Rifan"<<endl;
		cout<<" 1. CEK SALDO"<<endl;
		cout<<" 2. PENGAMBILAN UANG"<<endl;
		cout<<" 3. TRANSFER"<<endl;
		cout<<"Masukkan pilihan anda :";
		cin>>pilih;
		cout<<'\n';
		//Struktur percabangan if untuk memilih yang ingin dikerjakan
		if(pilih==1){	//jika memilih cek saldo
		cout<<"Saldo anda Rp. 5.000.000"<<endl;}
		if(pilih==2){	//jika memilih pengambilan uang
		cout<<"1. Rp. 50.000		4. Rp. 500.000"<<endl;
		cout<<"2. Rp. 100.000		5. Masukan jumlah lain"<<endl;
		cout<<"3. Rp. 200.000"<<endl;
		cout<<'\n'<<"Masukkan pilihan anda :";
		cin>>kode;
		switch(kode){	//Struktur percabangan switch-case
		case 1:
			cout<<"Anda Mengambil Uang Sebesar Rp.50.000"<<endl;
			s=5000000-50000;
			cout<<"Sisa Saldo Rp. "<<s<<endl;
			break;
		case 2:
			cout<<"Anda Mengambil Uang Sebesar Rp. 100.000"<<endl;
			s=5000000-100000;
			cout<<"Sisa Saldo Rp. "<<s<<endl;
			break;
		case 3:
			cout<<"Anda Mengambil Uang Sebesar Rp. 200.000"<<endl;
			s=5000000-200000;
			cout<<"Sisa Saldo Rp. "<<endl;
			break;
		case 4:
			cout<<"Anda Mengambil Uang Sebesar Rp. 500.000"<<endl;
			s=5000000-500000;
			break;
		case 5:
			cout<<"Masukkan saldo yang ingin diambil: Rp. ";
			cin>>ambil;
			s=5000000-ambil;
			cout<<"Sisa Saldo Rp. "<<s<<endl;
			break;
		default:
			cout<<"Kode yang anda masukkan tidak ada"<<endl;}}
		if(pilih==3){	//jika memilih transfer
		cout<<"Masukan No Rekening";
		cin>>no;
		cout<<"Masukan saldo yang mau di transfer: Rp. ";
		cin>>transfer;
		s=5000000-transfer;
		cout<<"\nNo Rekening: "<<no<<endl;
		cout<<"Jumlah Transfer: Rp. "<<transfer<<endl;
		cout<<"=========================="<<endl;
		cout<<"Sisa Saldo Rp. "<<s<<endl;}
	}
	cout<<"Terima Kasih Atas Kunjungannya :)"<<endl;
	getch();
	system("PAUSE");
	return 0;
}
