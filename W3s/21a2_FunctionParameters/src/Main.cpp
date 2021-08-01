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
C++ Function Parameters

Parameters and Arguments

Informasi dapat diteruskan ke fungsi sebagai parameter. Parameter bertindak sebagai variabel di dalam fungsi.

Parameter ditentukan setelah nama fungsi, di dalam tanda kurung. Anda dapat menambahkan parameter sebanyak yang Anda inginkan, cukup pisahkan dengan koma:

void functionName(parameter1, parameter2, parameter3) {
    // kode yang akan dieksekusi
}

Contoh berikut memiliki fungsi yang mengambil string bernama fname sebagai parameter. Saat fungsi dipanggil, kami meneruskan nama depan, yang digunakan di dalam fungsi untuk mencetak nama lengkap:
*/
void myFunction(string fname) {
    cout << fname << " Refsnes\n";
}

int main() {
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");
    return 0;
}

// Liam Refsnes
// Jenny Refsnes
// Anja Refsnes
/*
Ketika parameter dilewatkan ke fungsi, itu disebut argumen. Jadi, dari contoh di atas: fname adalah parameter, sedangkan Liam, Jenny dan Anja adalah argumen.
*/