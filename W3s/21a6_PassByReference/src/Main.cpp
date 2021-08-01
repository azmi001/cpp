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
C++ Functions - Pass By Reference

Pass By Reference

Dalam contoh dari halaman sebelumnya, kami menggunakan variabel normal saat kami mengirimkan parameter ke suatu fungsi. Anda juga dapat meneruskan referensi ke fungsi tersebut. Ini bisa berguna saat Anda perlu mengubah nilai argumen:
*/
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Panggil fungsi tersebut, yang akan mengubah nilai firstNum dan secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}