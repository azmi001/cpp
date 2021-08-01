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
C++ Booleans

Sangat sering, dalam pemrograman, Anda 
membutuhkan tipe data yang hanya dapat 
memiliki satu dari dua nilai, seperti:

    - YA TIDAK
    - AKTIF / NONAKTIF
    - BENAR SALAH

Untuk ini, C ++ memiliki tipe data bool, 
yang dapat mengambil nilai true (1) atau 
false (0).

Nilai Boolean
Variabel boolean dideklarasikan dengan 
kata kunci bool dan hanya dapat mengambil 
nilai benar atau salah:
*/ 
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl;  // Outputs 1 (true)
    cout << isFishTasty << endl;  // Outputs 0 (false)

    return 0;
/*
Dari contoh di atas, Anda dapat membaca bahwa 
nilai benar menghasilkan 1, dan salah 
mengembalikan 0.

Namun, lebih umum mengembalikan nilai boolean 
dari ekspresi boolean (lihat halaman 
berikutnya).
*/
}