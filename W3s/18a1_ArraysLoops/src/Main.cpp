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
C++ Arrays and Loops

Ulangi Melalui Array
Anda dapat melakukan loop melalui elemen 
array dengan for loop.

Contoh berikut mengeluarkan semua elemen 
dalam larik mobil:
*/ 
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
for(int i = 0; i < 4; i++) {
  cout << i + 1 << ". " << cars[i] << "\n";
}
  return 0;
}