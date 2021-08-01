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
Operator + dapat digunakan di antara string 
untuk menambahkannya bersama-sama untuk 
membuat string baru. Ini disebut penggabungan
*/   
    string _NamaAwal = "Azmi ";
    string _NamaAkhir = "Munif";
    string _NamaPenuh = _NamaAwal + _NamaAkhir;
    cout << _NamaPenuh << "\n\n";
/* 
Pada contoh di atas, kami menambahkan spasi 
setelah firstName untuk membuat spasi antara 
John dan Doe pada keluaran. Namun, Anda juga 
dapat menambahkan spasi dengan tanda kutip 
("" atau '')
*/
    string _NamaAwal1 = "Azmi ";
    string _NamaAkhir1 = "Hartono";
    string _NamaPenuh1 = _NamaAwal1 + "Munif " + _NamaAkhir1;
    cout << _NamaPenuh1 << "\n\n";
/* 
Menambahkan

Sebuah string di C ++ sebenarnya adalah sebuah 
objek, yang berisi fungsi yang dapat melakukan 
operasi tertentu pada string. Misalnya, Anda 
juga bisa menggabungkan string dengan fungsi 
append ()
*/
    string _NamaAwal2 = "Azmi ";
    string _NamaAkhir2 = "Munif";
    string _NamaPenuh2 = _NamaAwal2.append(_NamaAkhir2);
    cout << _NamaPenuh2;
}
/*
Terserah Anda apakah Anda ingin menggunakan
 + atau append (). Perbedaan utama antara 
keduanya, adalah fungsi append () jauh lebih 
cepat. Namun, untuk pengujian dan semacamnya, 
mungkin lebih mudah menggunakan +
*/