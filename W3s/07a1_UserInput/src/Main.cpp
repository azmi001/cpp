#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 29 September 2020
Materi Pembelajaran : Bahasa C++
*/

/*
Membuat Kalkulator Sederhana

Dalam contoh ini, pengguna harus memasukkan 
dua angka. Kemudian kami mencetak jumlahnya 
dengan menghitung (menambahkan) 
kedua angka:
*/ 

int main(int argc, char const *argv[])
{
int x, y;
int sum;
cout << "Tulis angka pertama: ";
cin >> x;
cout << "Tulis angka kedua: ";
cin >> y;
sum = x + y;
cout << "Jika ditambah maka hasilnya adalah: " << sum;
}