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
    struct aktor
    {
        string nama;
        int tahun_lahir;
    };

    struct film
    {
        string judul;
        string genre;
        int tahun;
        // struck aktor
        aktor pemeran_1;
        aktor pemeran_2;
    };
    
    aktor aktor1, aktor2;
    film film1, film2;

    // buat aktor 1
    aktor1.nama = "Micheal Otong";
    aktor1.tahun_lahir = 1992;

    // buat aktor 2
    aktor2.nama = "Sandra Bulog";
    aktor2.tahun_lahir = 1995;

    // buat film
    film1.judul = "Pengabdi wakanda";
    film1.genre = "Documenter";
    film1.tahun = 2018;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;

    film2.judul = "Dilan 2000";
    film2.genre = "Action";
    film2.tahun = 2040;
    film2.pemeran_1 = aktor1;

    cout << film1.judul << endl;
    cout << film1.pemeran_1.nama << endl;
    cout << film1.pemeran_2.nama << endl;

    cout << film2.judul << endl;
    cout << film2.pemeran_1.nama << endl;
    cout << film2.pemeran_2.nama << endl;

    return 0;
}