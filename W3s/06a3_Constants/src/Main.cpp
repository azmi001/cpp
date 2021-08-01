#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 29 September 2020
Materi Pembelajaran : Bahasa C++
*/

/*
Jika Anda tidak ingin orang lain (atau diri Anda
sendiri) menimpa nilai variabel yang ada, 
gunakan kata kunci const (ini akan mendeklarasikan 
variabel sebagai "konstan", yang berarti tidak 
dapat diubah dan hanya-baca):

const int myNum = 15;  // myNum akan selalu 15
myNum = 10;  // error: assignment of read-only variable 'myNum'
*/ 

int main(int argc, char const *argv[])
{
//Anda harus selalu mendeklarasikan variabel sebagai konstan jika Anda memiliki nilai yang tidak mungkin berubah:
const int minutesPerHour = 60;
const float PI = 3.14;
cout << minutesPerHour <<endl << PI;
}