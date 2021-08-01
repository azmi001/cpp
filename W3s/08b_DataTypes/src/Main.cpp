#include <iostream>
#include <string>

using namespace std;
/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 4 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
/*
Soal :
Add the correct data type for 
the following variables:
*/ 
int main(int argc, char const *argv[]){
    int _myNumber = 9;
    double _myDouble = 8.99;
    char _myLetter ='A';
    bool _myBool = false;
    string _myText = "Hello World";

    cout << "My Number = " << _myNumber << endl;
    cout << "My Double Number = " << _myDouble << endl;
    cout << "My Letter = " << _myLetter << endl;
    cout << "My Bolean = " << _myBool << endl;
    cout << "My Text = " << _myText << endl;

    return 0;
}