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
C++ Pointers

Membuat Pointer

Anda telah belajar dari bab sebelumnya, bahwa kita bisa mendapatkan alamat memori dari sebuah variabel dengan menggunakan operator &:

string food = "Pizza"; // variable food  tipe string

cout << food;  // Menghasilkan nilai
food (Pizza)
cout << &food; // Menghasilkan nilai memory address dari food (0x6dfed4)

Namun pointer adalah variabel yang menyimpan alamat memori sebagai nilainya.

Variabel pointer menunjuk ke tipe data (seperti int atau string) dari tipe yang sama, dan dibuat dengan operator *. Alamat variabel yang Anda kerjakan ditugaskan ke penunjuk:
*/ 
string food = "Pizza";  // variable food  tipe string
string* ptr = &food;    // pointer variable, dengan nama ptr, yang menyimpan alamat dari variable food

// Menghasilkan nilai food (Pizza)
cout << food << "\n";

// Menghasilkan nilai memory address dari food (0x6dfed4)
cout << &food << "\n";

// Menghasilkan nilai memory address dari food dengan menggunakan pointer (0x6dfed4)
cout << ptr << "\n";
  
return 0;
}
/*
Contoh menjelaskan
Buat variabel pointer dengan nama ptr, yang mengarah ke variabel string, dengan menggunakan tanda asterisk * (string * ptr). Perhatikan bahwa tipe penunjuk harus cocok dengan tipe variabel yang Anda kerjakan.

Gunakan & operator untuk menyimpan alamat memori dari variabel yang disebut makanan, dan tetapkan ke penunjuk.

Sekarang, ptr menyimpan nilai alamat memori makanan.

Tip: Ada tiga cara untuk mendeklarasikan variabel pointer, tetapi cara pertama lebih disukai:

string* mystring; // Preferred
string *mystring;
string * mystring;
*/