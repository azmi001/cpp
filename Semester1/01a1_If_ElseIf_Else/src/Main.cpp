#include <iostream>

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 7 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/

using namespace std;

int main(int argc, char const *argv[]) { 
     int number;

    cout << "Masukan bilangan integer: ";
    cin >> number;
    if (number >= 0) {
        cout << "Anda memasukan bilangan positif integer: " << number << endl;
    } 
    else if (number < 0) {
      cout << "Anda memasukan bilangan negatif integer: " << number << endl;
     } 
    else {
        cout << "Anda memasukan bilangan 0." << endl;
    }
     cout << "Statemen ini selalu dicetak.";
    return 0;
}