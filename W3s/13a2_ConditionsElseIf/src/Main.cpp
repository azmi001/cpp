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
C++ Else If

The else if Statement
Gunakan pernyataan else if untuk 
menentukan kondisi baru jika kondisi 
pertama salah.

if (condition1) {
  // blok kode yang akan dieksekusi jika condition1 benar
} else if (condition2) {
  // blok kode yang akan dieksekusi jika condition1 salah dan condition2 benar
} else {
  // blok kode yang akan dieksekusi jika condition1 salah dan condition2 salah
}
*/ 
    int time = 22;
    if (time < 10) {
        cout << "Good morning.";
    } else if (time < 20) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }
// Outputs "Good evening."
    return 0;
}
/*
Dalam contoh di atas, waktu (22) lebih 
besar dari 10, jadi kondisi pertama salah. 
Kondisi selanjutnya, di else if statement, 
juga salah, jadi kita lanjutkan ke 
kondisi lain karena condition1 dan 
condition2 sama-sama salah - dan 
mencetak ke layar "Selamat malam".

Namun, jika saat itu pukul 14, program 
kami akan mencetak "Selamat siang."
*/