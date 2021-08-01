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

int main(int argc, char const *argv[])
{
    // Rumus Script

    // Sub Struck
    struct tipeTanggal {
    int tanggal,bulan,tahun;
    };

    // Main Struck
    struct tipePeserta {
    int nourut;
    string nama;
    tipeTanggal tanggallahir;
    };
    
    // Isi Sub Struck
    tipeTanggal tanggallahir{
        8,3,2001
    };
    
    // Isi Main Struck
    tipePeserta Mahasiswa{
        1,"Azmi Munif Hartono", tanggallahir
    };

    // Menampilkan Data Ke Layar
    cout << "Nama Mahasiswa : " << Mahasiswa.nama << endl;
    cout << "No urut Mahasiswa : " << Mahasiswa.nourut << endl;
    cout << "Tahun Lahir : " << Mahasiswa.tanggallahir.tahun << endl;

    return 0;
}