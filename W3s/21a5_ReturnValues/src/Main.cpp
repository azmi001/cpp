#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 31 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
//======================================
/*
C++ The Return Keyword

Return Values

Kata kunci void, yang digunakan dalam contoh sebelumnya, menunjukkan bahwa fungsi tersebut tidak boleh mengembalikan nilai. Jika Anda ingin fungsi mengembalikan nilai, Anda dapat menggunakan tipe data (seperti int, string, dll.) Sebagai ganti void, dan gunakan kata kunci return di dalam fungsi:
*/ 
/*
int myFunction(int x) {
  return 5 + x;
}

int main() {
    cout << myFunction(3);
    return 0;
}

// Outputs 8 (5 + 3)

Contoh ini mengembalikan jumlah fungsi dengan dua parameter:

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  cout << myFunction(5, 3);
  return 0;
}

// Outputs 8 (5 + 3)

Anda juga dapat menyimpan hasil dalam variabel:
*/
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3);
  cout << z;
  return 0;
}
// Outputs 8 (5 + 3)