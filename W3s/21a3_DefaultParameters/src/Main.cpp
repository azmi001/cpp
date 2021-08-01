#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 31 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
//======================================
/*
C++ Default Parameters

Nilai Parameter Default
Anda juga dapat menggunakan nilai parameter default, dengan menggunakan tanda sama dengan (=).

Jika kita memanggil fungsi tanpa argumen, ini menggunakan nilai default ("Norway"):
*/ 
void myFunction(string country = "Norway") {
    cout << country << "\n";
}

int main() {
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");

    return 0;
}