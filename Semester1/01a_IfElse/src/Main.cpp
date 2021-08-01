#include <iostream>

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 7 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/

using namespace std;

int main(int argc, char const *argv[]) { 
    int _number;

    cout << "Masukan bilangan interger: ";
    cin >> _number;

    if (_number >= 0) {
        cout << "Anda Memasukan Bilangan Positif interger: " << _number << endl;
    }
    else 
    {
        cout << "Anda memasukan bilangan negatif interger: " << _number << endl;
    }
    cout << "statement ini selalu dicetak.";
    
    return 0;
}