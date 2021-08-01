#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 29 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
int main(int argc, char const *argv[]) {
/*
C++ Booleans Expressions

SEkspresi Boolean adalah ekspresi C ++ yang 
mengembalikan nilai boolean: 1 (true) atau 0 
(false).

Anda dapat menggunakan operator perbandingan, 
seperti operator lebih besar dari (>) untuk 
mengetahui apakah ekspresi (atau variabel) benar:
*/ 
    int x = 10;
    int y = 9;
    cout << (x > y) << endl; 
// mengembalikan 1 (benar), karena 10 lebih tinggi dari 9
// Atau bahkan lebih mudah:
    cout << (10 > 9) << endl; 
// mengembalikan 1 (benar), karena 10 lebih tinggi dari 9
/* 
Dalam contoh di bawah ini, kami menggunakan 
operator sama dengan (==) untuk mengevaluasi 
ekspresi:
*/
    int x = 10;
    cout << (x == 10) << endl;  
// mengembalikan 1 (benar), karena nilai x sama dengan 10
    cout << (10 == 15) << endl;  
// mengembalikan 0 (salah), karena 10 tidak sama dengan 15

    return 0;
}