#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 28 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
int main(int argc, char const *argv[]) {
/*
C++ Logical Operators

Operator	Nama	        Deskripsi Contoh
&& 	        Logical and	    Mengembalikan nilai benar jika kedua pernyataan benar x <5 && x <10	
|| 	        Logical or	    Returns true if one of the statements is true	x < 5 || x < 4	
!	        Logical not	    Reverse the result, returns false if the result is true	!(x < 5 && x < 10)	
*/ 
    int a = 5;
    int b = 3;
    cout << (a > 3 && a < 10); 
    // mengembalikan true (1) karena 5 lebih besar dari 3 AND 5 kurang dari 10
    
    int c = 5;
    int d = 3;
    cout << (c > 3 || c < 4); 
    // mengembalikan true (1) karena salah satu kondisinya benar (5 lebih besar dari 3, tetapi 5 tidak kurang dari 4)

    int e = 5;
    int f = 3;
    cout << (!(e > 3 && e < 10)); 
    // mengembalikan salah (0) karena! (tidak) digunakan untuk membalikkan hasil
    
    return 0;
}