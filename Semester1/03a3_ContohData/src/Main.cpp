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
struct mahasiswa{
    string nama;
    string prodi;
    float ipk;
};

int main(int argc, char const *argv[])
{
    // Script Rumus
    mahasiswa mhs;
 
    mhs.nama="Setiawan Dimas";
    mhs.prodi="Teknik Grafika";
    mhs.ipk=3.42;

    cout << mhs.nama << endl;
    cout << mhs.prodi << endl;
    cout << mhs.ipk << endl;

    return 0;
}