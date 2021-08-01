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
C++ Switch Statements

Gunakan pernyataan switch untuk memilih 
salah satu dari banyak blok kode yang akan 
dieksekusi

Syntax

switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

Begini Cara kerjanya:

  - Ekspresi sakelar dievaluasi sekali
  - Nilai ekspresi dibandingkan dengan nilai 
    tiap kasus
  - Jika ada kecocokan, blok kode terkait 
    dijalankan
  - Kata kunci break dan default adalah 
    opsional
*/ 
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  default:
    cout << "Looking forward to the Weekend";
//Kata kunci default menentukan beberapa kode untuk dijalankan jika tidak ada kasus yang cocok:
}
// Outputs "Thursday" (day 4)
    return 0;
}
/*
Kata kunci break
Ketika C ++ mencapai kata kunci break, C ++ 
akan keluar dari blok switch.

Ini akan menghentikan eksekusi lebih banyak 
kode dan pengujian kasus di dalam blok.

Ketika kecocokan ditemukan, dan pekerjaan 
selesai, saatnya istirahat. Tidak perlu 
pengujian lebih lanjut.
*/