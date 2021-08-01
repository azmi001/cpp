#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 27 September 2020
Materi Pembelajaran : Bahasa C++
*/

/*
setiap variable harus mempunyai sebuah
nama yang unik, sebuah nama yang unik 
disebut dengan identifiers
identifiers bisa menggunakan nama yang pendek
contoh seperti (x dan y) atau yang lebih deskriptif (umur, sum, totalVolume).

NOTE: Direkomendasikan untuk menggunakan nama 
deskriptif untuk membuat kode yang dapat 
dimengerti dan dipelihara
*/ 

int main(int argc, char const *argv[])
{
    // Good
    int minutesPerHour = 60;

    // Oke, tapi tidak begitu mudah untuk memahami m itu apa sebenarnya
    int m = 60;
    cout << minutesPerHour << endl << endl << m;
    return 0;
}

/*
NOTE : 
Aturan umum untuk membangun nama untuk variabel (unique identifiers) adalah:

- Nama dapat berisi huruf, angka, dan garis bawah Nama harus dimulai dengan huruf atau garis bawah (_)
- Nama peka huruf besar / kecil (myVar dan myvar adalah variabel yang berbeda)
- Nama tidak boleh berisi spasi putih atau karakter khusus seperti (!, #,%, Dll).
- Kata yang dicadangkan (seperti kata kunci C ++, seperti int) tidak dapat digunakan sebagai nama uniqe idenfiers atau variable
*/