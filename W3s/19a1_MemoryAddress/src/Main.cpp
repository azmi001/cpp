#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 31 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
int main(int argc, char const *argv[]) {
/*
C++ Memory Address

Pada contoh dari halaman sebelumnya, operator & digunakan untuk membuat variabel referensi. Tapi itu juga bisa digunakan untuk mendapatkan alamat memori dari sebuah variabel; yang merupakan lokasi penyimpanan variabel di komputer.

Saat variabel dibuat di C ++, alamat memori ditetapkan ke variabel. Dan ketika kita menetapkan nilai ke variabel, itu disimpan di alamat memori ini.

Untuk mengaksesnya, gunakan operator &, dan hasilnya akan mewakili di mana variabel disimpan:
*/ 

  string food = "Pizza";

  cout << &food; // Outputs 0x6dfed4

  return 0;
}
/*
Catatan: Alamat memori dalam bentuk heksadesimal (0x ..). Perhatikan bahwa Anda mungkin tidak mendapatkan hasil yang sama dalam program Anda.

Dan mengapa berguna untuk mengetahui alamat memori?
Referensi dan Pointer (yang akan Anda pelajari di bab berikutnya) penting dalam C ++, karena memberikan Anda kemampuan untuk memanipulasi data di memori komputer - yang dapat mengurangi kode dan meningkatkan kinerja.

Kedua fitur ini adalah salah satu hal yang membuat C ++ menonjol dari bahasa pemrograman lain, seperti Python dan Java.
*/