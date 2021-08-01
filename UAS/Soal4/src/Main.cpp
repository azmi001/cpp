#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;
/*
Penggunaan Program  : Tugas UAS Soal 4
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 11 Desember 2020
Materi Pembelajaran : Bahasa C++
*/
int noantrian = 0;
    struct data {
        int nomor;
        string nama;
        string status;
    }ktp;

    void head(){
     cout << "\t\t|===============================================|"<<endl;
     cout << "\t\t|         APLIKASI PENDAFTARAN                  |"<<endl;
     cout << "\t\t|===============================================|"<<endl;
    }

    void AddAntrian(int urutan,string nama,string status){
        ktp.nomor=urutan;
        ktp.nama=nama;
        ktp.status=status;
    }

    int main() {
     awal:
     int menu;

     system("cls");
     system ("color a");
     head();
     cout << "\t\t|MENU UTAMA :                                   |"<<endl;
     cout << "\t\t|[1] Registrasi Antrian                         |"<<endl;
     cout << "\t\t|                                               |"<<endl;
     cout << "\t\t|[2] Keluar                                     |"<<endl;
     cout << "\t\t|===============================================|"<<endl;
     cout << "\t\t|Masukan Pilihan Anda (1-2) :                "; cin >> menu;
     if(menu==1){
     cout<< "\t\tmasukkan nomor ktp : " ;
     cin >> ktp.nomor;
     cout << "\t\tMasukka nama : ";
     cin.ignore();
     getline(cin, ktp.nama);
     cout << "\t\tmasukkan status : ";
     cin.ignore();
     getline(cin, ktp.status);
     AddAntrian(ktp.nomor,ktp.nama,ktp.status);

    cout<<endl<<endl;
    cout<<"\t\tData ditambahkan!"<<endl;
    cout<<"\t\tNomor KTP : "<<ktp.nomor<<endl;
    cout<<"\t\tNama : "<<ktp.nama<<endl;
    cout<<"\t\tStatus : "<<ktp.status<<endl;
    noantrian=noantrian+1;
    cout<<"\t\tNomor antrian anda : "<<noantrian;
    cout<<endl<<endl;
    system("pause");
    goto awal;



     }

     else if(menu==2){
        return 0;
     }

     //Tambahkan algoritma untuk membuat menu registrasi antrian dan keluar
     //Registrasi memanggil fungsi Add Antrian
     //Keluar return 0;
    }
