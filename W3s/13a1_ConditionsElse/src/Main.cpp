#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 29 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
int main(int argc, char const *argv[]) {
/*
The else Statement
Gunakan pernyataan else untuk menentukan blok 
kode yang akan dieksekusi jika kondisinya salah.

if (condition) {
  // blok kode yang akan dieksekusi jika kondisinya benar
} else {
  // blok kode yang akan dieksekusi jika kondisinya salah
}
*/ 
    int time = 20;
    if (time < 18) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }
// Outputs "Good evening."
/*
Contoh menjelaskan
Pada contoh di atas, waktu (20) lebih besar dari 18, 
jadi kondisinya salah. Karena itu, kami beralih ke 
kondisi lain dan mencetak ke layar "Selamat malam". 
Jika waktunya kurang dari 18, program akan mencetak 
"Good day".
*/

    return 0;
}