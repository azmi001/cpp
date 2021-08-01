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
C++ Functions Declaration and Definition

Fungsi C ++ terdiri dari dua bagian:

    -Deklarasi: nama fungsi, tipe kembalian, dan parameter (jika ada)
    -Definisi: tubuh fungsi (kode yang akan dieksekusi)

void myFunction() { // declaration
    // badan dari sebuah function (definition)
}

Catatan: Jika fungsi yang ditentukan pengguna, seperti myFunction () dideklarasikan setelah fungsi main (), kesalahan akan terjadi. Itu karena C ++ bekerja dari atas ke bawah; artinya jika fungsi tidak dideklarasikan di atas main (), program tidak menyadarinya:

Example:

int main() {
  myFunction();
  return 0;
}

void myFunction() {
  cout << "I just got executed!";
}

// Error

Namun, dimungkinkan untuk memisahkan deklarasi dan definisi fungsi - untuk pengoptimalan kode.

Anda akan sering melihat program C ++ yang memiliki deklarasi fungsi di atas main (), dan definisi fungsi di bawah main (). Ini akan membuat kode lebih terorganisir dan lebih mudah dibaca:
*/ 

// Function declaration
void _functionGWNjing();

// The main method
int main(int argc, char const *argv[]) {
    _functionGWNjing();
    return 0;
}

// Function definition
void _functionGWNjing(){
    cout << "WOW Gw Tereksekusi NJING !!!";
}