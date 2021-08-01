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
C++ Function Overloading

Function Overloading

Dengan kelebihan beban fungsi, beberapa fungsi dapat memiliki nama yang sama dengan parameter berbeda:

int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)

Perhatikan contoh berikut, yang memiliki dua fungsi yang menambahkan angka dengan tipe berbeda:

int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}

Daripada menentukan dua fungsi yang harus melakukan hal yang sama, lebih baik Anda membebani satu fungsi.

Pada contoh di bawah ini, kami membebani fungsi plusFunc agar berfungsi baik untuk int dan double:
*/

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}

// Note: Multiple functions can have the same name as long as the number and/or type of parameters are different.