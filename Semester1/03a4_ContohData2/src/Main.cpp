#include <iostream>
#include <string>
/*
Penggunaan Program  : Latihan Struck CPP, PPT
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 11 November 2020
Materi Pembelajaran : Bahasa C++
*/
using namespace std;

//bentuk Struk
int i;
struct tipeTanggal {
int Tanggal,Bulan,Tahun;
};

struct tipePeserta {
int nourut;
string nama;
tipeTanggal Lahir;
};

tipePeserta Peserta[3]; 

int main(int argc, char const *argv[])
{
    // Script Rumus
    for (i = 0; i < 3; i++)
    {
        cout << "No Urut  : "; 
        cin >> Peserta[i].nourut;
        cout << "Nama  : "; 
        cin >> Peserta[i].nama;
        cout << "Tanggal Lahir  :\n";
        cout << "\tTanggal  : "; 
        cin >> Peserta[i].Lahir.Tanggal;
        cout << "\tBulan  : "; 
        cin >> Peserta[i].Lahir.Bulan;
        cout << "\tTahun  : "; 
        cin >> Peserta[i].Lahir.Tahun;
    }
    for (i = 0; i < 3; i++)
    {
        cout << "\nNo Urut  : " << Peserta[i].nourut; 
        cout << "\nNama  : " << Peserta[i].nama; 
        cout << "\nTanggal Lahir  :\n";
        cout << "Tanggal  : " << Peserta[i].Lahir.Tanggal; 
        cout << "\tBulan  : " << Peserta[i].Lahir.Bulan; 
        cout << "\tTahun  : " << Peserta[i].Lahir.Tahun;
    }

    return 0;
}