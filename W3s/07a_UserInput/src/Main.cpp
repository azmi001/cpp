#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 29 September 2020
Materi Pembelajaran : Bahasa C++
*/

/*
C++ User Input
Anda telah mempelajari bahwa "cout" digunakan 
untuk mengeluarkan (print) nilai. Sekarang 
kita akan menggunakan "cin" untuk mendapatkan 
input pengguna.

"cin" adalah variabel standar yang membaca data 
dari keyboard dengan operator ekstraksi (>>).

Dalam contoh berikut, pengguna dapat memasukkan 
angka, yang disimpan dalam variabel x. 
lalu kemudian mencetak nilai x
*/ 

int main(int argc, char const *argv[])
{
//Example :
int x; 
cout << "Tuliskan Sebuah Nomor: "; // tuliskan sebuah nomor dan menekan tombol enter
cin >> x; //Mendapatkan input user dari keyboard
cout << "Nomor anda adalah: " << x; // menampilkan data input dari userjsdf
}

/*
NOTE:
- "cout" disebut dalam bahasa ingrris
  "see-out". digunakan untuk output, 
  dan menggunakan operator (<<)
- "cin" disebut dalam bahasa ingrris
  "see-in". digunakan untuk input, dan 
  menggunakan operator (>>)
*/