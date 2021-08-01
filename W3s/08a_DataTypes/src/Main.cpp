#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 29 September 2020
Materi Pembelajaran : Bahasa C++
*/

/*
C++ Data Types

Seperti yang dijelaskan di bab Variabel, 
variabel dalam C ++ harus berupa tipe data 
yang ditentukan:
*/ 

int main(int argc, char const *argv[])
{
int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99;     // Floating point number
double myDoubleNum = 9.98;   // Floating point number
char myLetter = 'D';         // Character
bool myBoolean = false;       // Boolean
string myText = "Hello";     // String

cout << "My Number " << myNum << endl;
cout << "My Float Number " << myFloatNum << endl;
cout << "My Double Number " << myDoubleNum << endl;
cout << "My Letter " << myLetter << endl;
cout << "My Boolean " << myBoolean << endl;
cout << "My Text " << myText << endl;

return 0;
}

/*
Dasar tipe data

Tipe Data       Ukuran      Deskripsi
- int           4 bytes     Menyimpan bilangan bulat, tanpa desimal
- float         4 bytes     Menyimpan bilangan pecahan, berisi satu 
                            atau lebih desimal. Cukup untuk menyimpan 
                            7 angka desimal
- double        8 bytes     Menyimpan bilangan pecahan, berisi satu 
                            atau lebih desimal. Cukup untuk menyimpan 
                            15 angka desimal
- boolean       1 byte      Menyimpan nilai benar atau salah
- char          1 byte      Menyimpan satu karakter / huruf / angka, 
                            atau nilai ASCII
*/