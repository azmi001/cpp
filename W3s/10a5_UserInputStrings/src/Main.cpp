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
String Input Pengguna

Dimungkinkan untuk menggunakan operator ekstraksi 
>> di cin untuk menampilkan string yang 
dimasukkan oleh pengguna:
*/
string myString = "Hello";
string firstName;
cout << "Type your first name: ";
cin >> firstName; // dapatkan masukan pengguna dari keyboard
cout << "Your name is: " << firstName;
}