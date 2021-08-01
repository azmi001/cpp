#include <iostream>

#include <string>
// Sertakan pustaka string

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 28 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
int main(int argc, char const *argv[]) {
/*
Access Strings

Anda dapat mengakses karakter dalam sebuah string 
dengan mengacu pada nomor indeksnya di dalam 
tanda kurung siku [].

Contoh ini mencetak karakter pertama di myString:
*/
string myString = "Hello";
cout << myString[0] << endl;
// Outputs H
/*
Catatan: Indeks string dimulai dengan 0: [0] 
adalah karakter pertama. [1] adalah karakter 
kedua, dll.
*/
cout << myString[1] << endl;
// Outputs e
/*
Ubah Karakter String
Untuk mengubah nilai karakter tertentu dalam 
sebuah string, lihat nomor indeks, dan gunakan 
tanda kutip tunggal:
*/
myString[0] = 'J';
cout << myString;
// Mengeluarkan Jello, bukan Hello
}