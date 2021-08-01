#include <iostream>

#include <string>
// Sertakan pustaka string

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 28 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
int main(int argc, char const *argv[]) {
/*
PERINGATAN!

C ++ menggunakan operator + untuk penambahan 
dan penggabungan.

Angka ditambahkan. String digabungkan.
*/

//Jika Anda menambahkan dua angka, hasilnya adalah angka:
int a = 10;
int b = 20;
int c = a + b;  // c Akan Menjadi 30 (Sebuah integer)
cout << c << endl;

//Jika Anda menambahkan dua string, hasilnya adalah rangkaian string:
string x = "10";
string y = "20";
string z = x + y;   // z Akan Menjadi 1020 (Sebuah string)
cout << z <<endl;

/*
If you try to add a number to a string, an error occurs:

string x = "10";
int y = 20;
string z = x + y;
*/
}