#include <iostream>

#include <string>
// Sertakan pustaka string

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 28 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
int main(int argc, char const *argv[]) {
/*
String Length

Untuk mendapatkan panjang string, gunakan fungsi length ()

Tip: You might see some C++ programs that use the size() 
function to get the length of a string. This is just an 
alias of length(). It is completely up to you if you 
want to use length() or size()
*/
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();
cout << "\n\n" << txt.size();
}