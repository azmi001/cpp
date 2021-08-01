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
string fullName;
cout << "Type your full name: ";
cin >> fullName;
cout << "Your name is: " << fullName;

Dari contoh di atas, Anda mengharapkan program 
untuk mencetak "John Doe", tetapi program hanya 
mencetak "John".

Itu sebabnya, saat bekerja dengan string, kita 
sering menggunakan fungsi getline () untuk 
membaca sebaris teks. Ini mengambil cin sebagai 
parameter pertama, dan variabel string sebagai 
yang kedua:
*/
string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;

// Ketik nama lengkap Anda: John Doe
// Nama Anda: John Doe
}