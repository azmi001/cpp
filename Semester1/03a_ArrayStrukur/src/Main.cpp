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
    int i;
    struct tipeBarang {
    string kode;
    string nama;
    int jumlah;
    };

    tipeBarang stok[3] = {
    {"KD02","pulpen",36},
    {"KD03","kertas A4",6},
    {"KD04","penghapus",12}
    }; 

    struct Hasilstudi {
    string nim;
    int nilai_semester[3];
    };
    
    Hasilstudi mahasiswa = {
        "20201011",{90,80,70}
    };

    // Menampilkan Ke Layar

    //Menampilkan Info Data Barang
    cout << "Menampilkan Info Barang\n\n";
    cout << "No. Kode Barang Nama Jumlah Barang\n";
    for (i = 0; i < 3; i++)
    {
        cout << i + 1 << ".  ";
        cout << stok[i].kode << " ";
        cout << stok[i].nama << "       ";
        cout << stok[i].jumlah << " \n";
    }
    
    //Menampilak Info Data Mahasiswa
    cout << "\nNIM Mahasiswa : " << mahasiswa.nim << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "Nilai ke " << i + 1 << " = " << mahasiswa.nilai_semester[i] << endl;
    }

    return 0;
}