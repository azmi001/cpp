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
Kondisi C ++ dan Pernyataan If
C ++ mendukung kondisi logika biasa dari matematika:

    - Kurang dari: a < b
    - Kurang dari atau sama dengan: a <= b
    - Lebih besar dari: a > b
    - Lebih dari atau sama dengan: a >= b
    - Sama dengan a == b
    - Tidak Sama dengan: a != B

Anda dapat menggunakan kondisi ini untuk melakukan 
tindakan yang berbeda untuk keputusan yang berbeda.

C ++ memiliki pernyataan bersyarat berikut:

    - Gunakan if untuk menentukan blok kode yang 
      akan dieksekusi, jika kondisi yang ditentukan benar
    - Gunakan else untuk menentukan blok kode 
      yang akan dieksekusi, jika kondisi yang sama 
      salah
    - Gunakan else if untuk menentukan kondisi baru 
      yang akan diuji, jika kondisi pertama salah
    - Gunakan sakelar untuk menentukan banyak blok 
      kode alternatif yang akan dieksekusi

Pernyataan if
Gunakan pernyataan if untuk menentukan blok kode 
C ++ yang akan dieksekusi jika kondisinya benar.

Syntax
if (condition) {
  // blok kode yang akan dieksekusi jika kondisinya benar
}

Perhatikan bahwa jika dalam huruf kecil. Huruf besar 
(If atau IF) akan menghasilkan kesalahan.

Pada contoh di bawah ini, kami menguji dua nilai 
untuk mengetahui apakah 20 lebih besar dari 18. 
Jika kondisinya benar, cetak beberapa teks:
*/ 
    if (20 > 18) {
        cout << "20 is greater than 18" << endl;
    }
// Kami juga dapat menguji variabel:
    int x = 20;
    int y = 18;
    if (x > y) {
        cout << "x is greater than y";
    }
/*
Contoh menjelaskan
Pada contoh di atas kita menggunakan dua variabel, 
x dan y, untuk menguji apakah x lebih besar dari y 
(menggunakan operator>). Karena x adalah 20, dan y 
adalah 18, dan kita tahu bahwa 20 lebih besar dari 
18, kita mencetak ke layar bahwa "x lebih besar 
dari y".
*/
    return 0;
}