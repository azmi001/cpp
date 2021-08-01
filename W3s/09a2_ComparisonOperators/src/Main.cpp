#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 26 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
int main(int argc, char const *argv[]) {
/*
Operator Perbandingan
Operator perbandingan digunakan untuk 
membandingkan dua nilai.

Catatan: 
Nilai hasil perbandingan adalah benar 
(1) atau salah (0).

Dalam contoh berikut, kami menggunakan 
operator lebih besar dari (>) untuk 
mengetahui apakah 5 lebih besar dari 3:
*/ 

/*
Daftar semua operator penugasan:

Operator	Nama                            Contoh
==	        Sama dengan	                    x == y	
!=	        Tidak sama	                    x != y	
>	        Lebih besar dari	            x > y	
<	        Kurang dari	                    x < y	
>=	        Lebih dari atau sama dengan     x >= y	
<=	        Kurang dari atau sama dengan    x <= y
*/
    int a = 5;
    int b = 3;
    cout << (a == b); 
    // mengembalikan 0 (salah) karena 5 tidak sama dengan 3
    
    int c = 5;
    int d = 3;
    cout << (c != d); 
    // mengembalikan 1 (benar) karena 5 tidak sama dengan 3

    int e = 5;
    int f = 3;
    cout << (e > f); 
    // mengembalikan 1 (benar) karena 5 lebih besar dari 3

    int x = 5;
    int y = 3;
    cout << (x < y); 
    // mengembalikan 0 (salah) karena 5 tidak kurang dari 3

    int x = 5;
    int y = 3;
    cout << (x >= y); 
    // mengembalikan 1 (benar) karena lima lebih besar dari, atau sama, dengan 3

    int x = 5;
    int y = 3;
    cout << (x <= y); 
    // mengembalikan 0 (salah) karena 5 tidak kurang dari atau sama dengan 3
    
    return 0;
}       