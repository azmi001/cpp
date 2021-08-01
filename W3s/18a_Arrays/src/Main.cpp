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
C ++ Array
Array digunakan untuk menyimpan beberapa nilai 
dalam satu variabel, bukan mendeklarasikan 
variabel terpisah untuk setiap nilai.

Untuk mendeklarasikan sebuah array, tentukan 
tipe variabelnya, tentukan nama dari array 
tersebut diikuti dengan tanda kurung siku dan 
tentukan jumlah elemen yang harus disimpan:

string cars[4];

Kami sekarang telah mendeklarasikan variabel 
yang menampung array empat string. Untuk 
memasukkan nilai ke dalamnya, kita dapat 
menggunakan literal array - tempatkan nilai 
dalam daftar yang dipisahkan koma, di dalam 
tanda kurung kurawal:

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

Untuk membuat larik tiga bilangan bulat, Anda
dapat menulis:

int myNum[3] = {10, 20, 30};

Akses Elemen Array
Anda mengakses elemen array dengan mengacu 
pada nomor indeks.

Pernyataan ini mengakses nilai elemen 
pertama di mobil:
*/ 
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0] << endl;
// Outputs Volvo
/*
Catatan: Indeks array dimulai dengan 0: [0] 
adalah elemen pertama. [1] adalah elemen 
kedua, dll.

Change an Array Element
Untuk mengubah nilai elemen tertentu, lihat 
nomor indeks:
*/

string cars1[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars1[0] = "Opel";
cout << cars1[0];
// Sekarang mengeluarkan Opel, bukan Volvo
  return 0;
}