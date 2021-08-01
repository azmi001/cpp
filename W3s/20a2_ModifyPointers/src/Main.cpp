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
C++ Modify Pointers

Ubah Nilai Pointer
Anda juga dapat mengubah nilai penunjuk. Tetapi perhatikan bahwa ini juga akan mengubah nilai variabel asli:
*/ 
    
    string food = "Pizza";
    string* ptr = &food;

    // Output nilai food (Pizza)
    cout << food << "\n";

    // Output alamat memori food (0x6dfed4)
    cout << &food << "\n";

    // Akses alamat memori address of food dan keluarkan nilainya (Pizza)
    cout << *ptr << "\n";

    // Ubah nilai dari pointer
    *ptr = "Hamburger";

    // Output nilai baru dari pointer (Hamburger)
    cout << *ptr << "\n";

    // Output nilai baru dari variable food variable (Hamburger)
    cout << food << "\n";

    cout << &food << "\n";

    return 0;
}