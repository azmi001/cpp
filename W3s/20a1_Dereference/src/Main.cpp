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
C++ Dereference

Get Memory Address and Value

Dalam contoh dari halaman sebelumnya, kami menggunakan variabel pointer untuk mendapatkan alamat memori dari sebuah variabel (digunakan bersama dengan operator & referensi). Namun, Anda juga dapat menggunakan pointer untuk mendapatkan nilai variabel, dengan menggunakan operator * (operator dereference):
*/ 

    string food = "Pizza";  // Deklarasi variabel
    string* ptr = &food;    // Deklarasi pointer

    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // Dereference: Keluarkan nilai food dengan pointer (Pizza)
    cout << *ptr << "\n";

    return 0;
}
/*
Perhatikan bahwa tanda * dapat membingungkan di sini, karena ia melakukan dua hal yang berbeda dalam kode kita:

    - Ketika digunakan dalam deklarasi (string * ptr), itu membuat variabel pointer.
    - Jika tidak digunakan dalam deklarasi, ini bertindak sebagai operator dereferensi.
*/