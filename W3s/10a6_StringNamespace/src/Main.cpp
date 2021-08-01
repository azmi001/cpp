#include <iostream>
#include <string>

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 28 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
int main(int argc, char const *argv[]) {
/*
Menghilangkan Namespace
Anda mungkin melihat beberapa program C ++ 
yang berjalan tanpa pustaka namespace standar. 
Garis std menggunakan namespace dapat dihilangkan 
dan diganti dengan kata kunci std, diikuti 
oleh :: operator untuk objek string (dan cout):
*/
std::string greeting = "Hello";
std::cout << greeting;
return 0;
}