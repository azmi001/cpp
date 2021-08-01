#include <iostream>
#include <stdio.h>
/*
Penggunaan Program  : Tugas Struck CPP, Buat array dalam 
                      variabel myBook dan tambilkan 
                      seluruh inputan
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 16 November 2020
Materi Pembelajaran : Bahasa C++
*/
using namespace std;

// Variable Data
int i;
struct Buku
{
    char judul[50];
    char penerbit[20];
    int jmlhal;
};

int main(int argc, char const *argv[])
{
    // Menentukan Jumlah Buku
    int banyakbuku=0;
    Buku myBook[banyakbuku];
    cout << "Masukan berapa banyak buku : ";
    cin >> banyakbuku;

    // Mengimputkan judul, penerbit, dan jml hal
    for(i = 0; i < banyakbuku; i++)
	{
        //cin.ignore();
        //cout << "Masukan judul buku : ";
        //gets(myBook[i].judul);
        //cout << "Masukan penerbit buku : ";
        //gets(myBook[i].penerbit);
        cout << "Masukan jumlah halaman buku : ";
        cin >> myBook[i].jmlhal;
    }
    
    // Menampilkan data pada layar
    for(i = 0; i < banyakbuku; i++)
    {
        cout << "\nBuku ke-" << i+1;
        cout << "\nJudul        : " << myBook[i].judul;
        cout << "\nPenerbit     : " << myBook[i].penerbit;
        cout << "\nJumlah Hal.  : " << myBook[i].jmlhal << endl;
    }

    return 0;
}