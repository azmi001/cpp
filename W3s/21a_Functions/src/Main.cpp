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
C++ Functions

Fungsi adalah blok kode yang hanya berjalan saat dipanggil.

Anda dapat mengirimkan data, yang dikenal sebagai parameter, ke dalam suatu fungsi.

Fungsi digunakan untuk melakukan tindakan tertentu, dan penting untuk menggunakan kembali kode: Tentukan kode sekali, dan gunakan berkali-kali.

Create a Function

C ++ menyediakan beberapa fungsi yang telah ditentukan sebelumnya, seperti main (), yang digunakan untuk mengeksekusi kode. Tetapi Anda juga dapat membuat fungsi Anda sendiri untuk melakukan tindakan tertentu.

Untuk membuat (sering disebut sebagai deklarasi) fungsi, tentukan nama fungsinya, diikuti dengan tanda kurung ():

Syntax
void myFunction() {
  // code to be executed
}

Contoh Dijelaskan
    - myFunction () adalah nama fungsinya
    - void berarti bahwa fungsi tersebut tidak memiliki nilai pengembalian. Anda akan mempelajari lebih lanjut tentang nilai kembali nanti di bab berikutnya
    - di dalam fungsi (tubuh), tambahkan kode yang mendefinisikan apa yang harus dilakukan fungsi tersebut

Panggil Fungsi
Fungsi yang dideklarasikan tidak segera dijalankan. Mereka "disimpan untuk digunakan nanti", dan akan dijalankan nanti, ketika dipanggil.

Untuk memanggil fungsi, tulis nama fungsi diikuti dengan dua tanda kurung () dan titik koma;

Dalam contoh berikut, myFunction () digunakan untuk mencetak teks (tindakan), saat dipanggil:
*/ 
void _functionGWNjing() {
  cout << "WOW Aku tereksekusi NJING !!!\n";
}

int main(int argc, char const *argv[]) {
    _functionGWNjing();
    // Outputs = WOW Aku tereksekusi NJING !!!
    
    cout << endl;
    _functionGWNjing();
    _functionGWNjing();
    _functionGWNjing();
    return 0;
}

// Suatu fungsi dapat dipanggil beberapa kali