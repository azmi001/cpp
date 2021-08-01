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
Omit Array Size

Anda tidak perlu menentukan ukuran larik. Tetapi jika tidak, itu hanya akan sebesar elemen yang dimasukkan ke dalamnya:

string cars[] = {"Volvo", "BMW", "Ford"}; // ukuran Array selalu 3

Ini baik-baik saja. Namun, masalah muncul jika Anda menginginkan ruang ekstra untuk elemen masa depan. Kemudian Anda harus menimpa nilai yang ada:

example :
string cars[] = {"Volvo", "BMW", "Ford"}; // ini akan tertimpa/ditiban oleh yang bawah
string cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

Namun, jika Anda menentukan ukurannya, array akan menyediakan ruang ekstra:

string cars[5] = {"Volvo", "BMW", "Ford"}; // ukuran array adalah 5, padahal di dalamnya hanya ada tiga elemen

Sekarang Anda dapat menambahkan elemen keempat dan kelima tanpa menimpa yang lain:

cars[3] = {"Mazda"};
cars[4] = {"Tesla"};
*/ 

  string cars[5] = {"Volvo", "BMW", "Ford"};
  cars[3] = "Mazda";
  cars[4] = "Tesla";
  for(int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }

  cout << endl;
/*
Omit Elements on Declaration

Dimungkinkan juga untuk mendeklarasikan sebuah array tanpa menentukan elemen pada deklarasi, dan menambahkannya nanti:
*/

  string cars1[5];
  cars1[0] = "Volvo";
  cars1[1] = "BMW";
  cars1[2] = "Ford";
  cars1[3] = "Mazda";
  cars1[4] = "Tesla";
  for(int i = 0; i < 5; i++) {
    cout << cars1[i] << "\n";
  }

  return 0;
}