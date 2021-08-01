#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 4 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/

/*
C++ Character Types

Tipe data char digunakan untuk menyimpan 
satu karakter. Karakter harus diapit oleh 
tanda kutip tunggal, seperti 'A' atau 'c':
*/ 

int main(int argc, char const *argv[])
{
char myGrade = 'B';
//Alternatifnya, Anda dapat menggunakan nilai ASCII untuk menampilkan karakter tertentu:
char a = 65, b = 66, c = 67, d = 126, e = 42;

cout << "My Grade is " <<myGrade << endl;
cout << a << endl;
cout << b << endl;
cout << c << endl;
cout << d << endl;
cout << e << endl;

return 0;
}

/*
Tip: Daftar semua nilai ASCII dapat ditemukan di Referensi Tabel ASCII kami.
https://www.w3schools.com/charsets/ref_html_ascii.asp
*/