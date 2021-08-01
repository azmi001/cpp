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
    // Strucktur Data
    struct tipeBarang {
    string kode;
    string nama;
    int jumlah;
    } barang;

    struct tipeMahasiswa {
    string nim;
    string nama;
    int umur;
    };


    tipeMahasiswa mahasiswa = {
    "202021121","agus tiar",20
    };

    barang.kode = "KD01";
    barang.nama = "buku tulis";
    barang.jumlah = 12;

    // Menampilkan Data Ke layar
    cout << "Nim Mahasiswa : " << mahasiswa.nim << endl;
    cout << "Nama Mahasiswa : " << mahasiswa.nama << endl;
    cout << "Umur Mahasiswa : " << mahasiswa.umur << "\n\n";

    cout << "Info Barang :\n";
    cout << "Nama Kode : " << barang.kode << endl;
    cout << "Nama Barang : " << barang.nama << endl;
    cout << "Jumlah Barang : " << barang.jumlah << endl;
    
    return 0;
}