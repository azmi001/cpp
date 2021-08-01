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
C++ For Loop

Do / While Loop

Saat Anda tahu persis berapa kali Anda ingin 
mengulang melalui satu blok kode, gunakan loop 
for, bukan loop while:

for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
  - Pernyataan 1 dieksekusi (satu kali) sebelum 
    eksekusi blok kode.

  - Pernyataan 2 mendefinisikan kondisi untuk 
    mengeksekusi blok kode.

  - Pernyataan 3 dieksekusi (setiap kali) 
    setelah blok kode dijalankan.

Contoh di bawah ini akan mencetak angka 0 
sampai 4:
*/ 

for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}
/*
Contoh menjelaskan
  - Pernyataan 1 menetapkan variabel sebelum 
    pengulangan dimulai (int i = 0).

  - Pernyataan 2 mendefinisikan kondisi 
    untuk menjalankan loop (i harus kurang 
    dari 5). Jika kondisinya benar, pengulangan akan dimulai dari awal lagi, jika salah, pengulangan akan berakhir.

  - Pernyataan 3 meningkatkan nilai (i ++) 
    setiap kali blok kode dalam loop telah 
    dieksekusi.

Contoh lain
Contoh ini hanya akan mencetak nilai genap 
antara 0 dan 10:
*/
for (int x = 0; x <= 10; x = x + 2) {
  cout << x << "\n";
}

return 0;
}