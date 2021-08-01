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
C++ Break and Continue

C ++ Break
Anda telah melihat pernyataan break yang 
digunakan di bab sebelumnya dari tutorial 
ini. Itu digunakan untuk "melompat keluar" 
dari pernyataan saklar.

Pernyataan break juga dapat digunakan untuk 
melompat keluar dari loop.

Contoh ini melompat keluar dari loop ketika i 
sama dengan 4:
*/ 

  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    cout << i << "\n";
  }
cout << endl;
/*
C ++ Lanjutkan
Pernyataan Continue memutuskan satu 
iterasi (dalam loop), jika kondisi 
tertentu terjadi, dan berlanjut dengan 
iterasi berikutnya dalam loop.

Contoh ini melewatkan nilai 4:
*/
  for (int a = 0; a < 10; a++) {
    if (a == 4) {
      continue;
    }
    cout << a << "\n";
  }   
cout << endl;
/*
Istirahat dan Lanjutkan di While Loop

Anda juga dapat menggunakan break dan 
melanjutkan sementara loop:
*/
int b = 0;
while (b < 10) {
  cout << b << "\n";
  b++;
  if (b == 4) {
    break;
  }
}

cout << endl;

int c = 0;
while (c < 10) {
  if (c == 4) {
    c++;
    continue;
  }
  cout << c << "\n";
  c++;
}
  return 0;
}