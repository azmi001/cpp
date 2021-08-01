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
C++ Creating References

Variabel referensi adalah "referensi" ke variabel yang ada, dan dibuat dengan operator &:

string food = "Pizza";  // food variable
string &meal = food;    // reference to food

Sekarang, kita bisa menggunakan nama variabel makanan atau makanan nama referensi untuk merujuk ke variabel makanan:
*/ 

  string food = "Pizza";
  string &meal = food;

  cout << food << "\n";  // Outputs Pizza
  cout << meal << "\n";  // Outputs Pizza

  return 0;
}