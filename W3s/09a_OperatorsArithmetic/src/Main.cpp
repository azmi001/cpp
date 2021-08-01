#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 29 September 2020
Materi Pembelajaran : Bahasa C++
*/
int main(int argc, char const *argv[]) {
/*
C++ Operators

Operator digunakan untuk melakukan operasi 
pada variabel dan nilai.

Pada contoh di bawah ini, kami menggunakan 
operator + untuk menjumlahkan dua nilai:
*/ 
    int x = 100 + 50;
    cout << "Hasil x adalah = " << x << endl << endl;
/*
Meskipun operator + sering digunakan untuk 
menjumlahkan dua nilai, seperti pada contoh 
di atas, ini juga dapat digunakan untuk 
menjumlahkan variabel dan nilai, atau variabel 
dan variabel lain:
*/
    int _sum1 = 100 + 50;
    int _sum2 = _sum1 + 250;
    int _sum3 = _sum2 + _sum2;
    
    int _Pengurangan1 = 100 - 50;
    int _pengurangan2 = 250 - _Pengurangan1;
    int _pengurangan3 = 500 - _pengurangan2;

    int _perkalian1 = 2 * 5;
    int _perkalian2 = _perkalian1 * 3;
    int _perkalian3 = _perkalian2 * 10;

    int _pembagian1 = 40 / 2;
    int _pembagian2 = _pembagian1 / 2;
    int _pembagian3 = _pembagian2 / 2;

    int a = 5;
    int b = 2;
    int _modulus1 = a % b;

    int _cobs1 = 5;
    ++_cobs1;
    int _cobs1a = _cobs1 + _cobs1;

    int _cobs2 = 5;
    ++_cobs2;
    int _cobs2a = _cobs2 + ++_cobs2;

    int _cobs3 = 20;
    --_cobs3;
    int _cobs3a = _cobs3 + _cobs3;
    int _cobs3b = _cobs3 + --_cobs3;

    int _cobs4 = 20;
    --_cobs4;
    int _cobs4a = _cobs4 - _cobs4;
    int _cobs4b = _cobs4 - --_cobs4;

    cout << "Hasil Pertambahan Sum3 adalah = " << _sum3 << endl;
    cout << "Hasil Dari Pengurangan3 adalah = " << _pengurangan3 << endl;
    cout << "Hasil Dari Perkalian3 adalah = " << _perkalian3 << endl;
    cout << "Hasil Dari Pembagian3 adalah = " << _pembagian3 << endl;
    cout << "Hasil Dari Modulus1 adalah = " << _modulus1 << endl;
    cout << "Hasil Dari Coba1 dan Coba1a adalah = " << _cobs1 << " dan " << _cobs1a << endl;
    cout << "Hasil Dari Coba2 dan Coba2a adalah = " << _cobs2 << " dan " << _cobs2a << endl;
    cout << "Hasil Dari Coba3, Coba3a, dan Coba3b adalah = " << _cobs3 << ", " << _cobs3a << ", Dan " << _cobs3b << endl;
    cout << "Hasil Dari Coba4, Coba4a, dan Coba4b adalah = " << _cobs4 << ", " << _cobs4a << ", Dan " << _cobs4b << endl;

    return 0;
}

/*
C ++ membagi operator menjadi beberapa grup 
berikut:

- Operator aritmatika
- Operator penugasan
- Operator perbandingan
- Operator logika
- Operator bitwise

Operator aritmatika digunakan 
untuk melakukan operasi matematika umum.

Operator    Name            Description                             Example

+           Addition        Menjumlahkan dua nilai                  x + y
-           Subtraction     Mengurangi satu nilai dari yang lain    x - y
*           Multiplication  Mengalikan dua nilai                    x * y
/           Division        Membagi satu nilai dengan nilai lainnya x / y
%           Modulus         Mengembalikan sisa pembagian            x % y
++          Incerment       Increases the value of a variable by 1  ++x
--          Decrement       Decreases the value of a variable by 1  --x
*/