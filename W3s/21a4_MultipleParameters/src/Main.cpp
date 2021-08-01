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
C++ Multiple Parameters

Multiple Parameters

Di dalam fungsi, Anda dapat menambahkan parameter sebanyak yang Anda inginkan:
*/ 
void myFunction(string fname, int age) {
    cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
    myFunction("Liam", 3);
    myFunction("Jenny", 14);
    myFunction("Anja", 30);

    return 0;
}

// Liam Refsnes. 3 years old.
// Jenny Refsnes. 14 years old.
// Anja Refsnes. 30 years old.

/*
Perhatikan bahwa ketika Anda bekerja dengan beberapa parameter, pemanggilan fungsi harus memiliki jumlah argumen yang sama karena ada parameter, dan argumen harus diteruskan dalam urutan yang sama.
*/