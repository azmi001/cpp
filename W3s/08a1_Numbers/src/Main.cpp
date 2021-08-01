#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 29 September 2020
Materi Pembelajaran : Bahasa C++
*/

/*
C++ Numeric Data Types

Gunakan int ketika Anda perlu menyimpan 
bilangan bulat tanpa desimal, seperti 35 
atau 1000, dan mengapung atau menggandakan 
saat Anda membutuhkan bilangan floating 
point (dengan desimal), seperti 9,99 atau 
3,14515.
*/ 

int main(int argc, char const *argv[])
{
int myNum = 1000;
float myFloat = 5.75;
double myDouble = 19.99;

float f1 = 35e3;
double d1 = 12E4;

cout << "My Number " << myNum << endl;
cout << "My Float Number " << myFloat << endl;
cout << "My Double Number " << myDouble << endl << endl;

cout << "Hasil Float = " << f1 << endl;
cout << "Hasil Double = " << d1;

return 0;
}

/*
float vs. double

Ketepatan nilai titik mengambang menunjukkan 
berapa digit yang dapat dimiliki nilai 
setelah titik desimal. Ketepatan float hanya 
enam atau tujuh digit desimal, sedangkan 
variabel ganda memiliki presisi sekitar 15 
digit. Oleh karena itu, lebih aman 
menggunakan double untuk sebagian besar 
kalkulasi.
*/