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
C ++ Loops
Pengulangan dapat mengeksekusi satu blok kode 
selama kondisi tertentu tercapai.

Pengulangan berguna karena menghemat waktu, 
mengurangi kesalahan, dan membuat kode lebih 
mudah dibaca.

C ++ While Loop
While loop melakukan loop melalui blok kode 
selama kondisi yang ditentukan benar:

Syntax
while (condition) {\
  // blok kode untuk dieksekusi
}

Pada contoh di bawah ini, kode dalam loop akan 
berjalan, berulang kali, selama variabel (i) 
kurang dari 5:
*/ 

  int i = 0;
  while (i < 5) {
    cout << i << "\n";
    i++;
  }

  return 0;
}
/*
Catatan: Jangan lupa untuk menambah variabel 
yang digunakan dalam kondisi tersebut, jika 
tidak loop tidak akan pernah berakhir!
*/