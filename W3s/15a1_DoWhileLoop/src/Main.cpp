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
C++ Do/While Loop

Do / While Loop

Do / while loop adalah varian dari while loop. 
Loop ini akan mengeksekusi blok kode satu kali, 
sebelum memeriksa apakah kondisinya benar, 
maka akan mengulang loop selama kondisinya 
benar.

do {
  // code block to be executed
}
while (condition);

Contoh di bawah ini menggunakan do / while loop. 
Perulangan akan selalu dijalankan setidaknya 
sekali, bahkan jika kondisinya salah, karena 
blok kode dijalankan sebelum kondisi diuji:
*/ 

int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);

  return 0;
}
/*
Catatan: Jangan lupa untuk menambah variabel 
yang digunakan dalam kondisi tersebut, jika 
tidak loop tidak akan pernah berakhir!
*/