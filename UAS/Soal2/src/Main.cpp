#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;
/*
Penggunaan Program  : Tugas UAS Soal 2
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 11 Desember 2020
Materi Pembelajaran : Bahasa C++
*/
int main ()
{
    system ("COLOR A");
    int i, j, k, l, tinggi ;
    cout<<"Masukan tinggi segitiga =";
    cin>>tinggi;
    //buat perulangan untuk membuat segitiga sama kaki, seperti contoh :
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *

    l=tinggi;
    for( i = l; i >= 0; i--){
        for( j = i; j >= 0; j--)
        {
            cout << " ";
        }
        for( k = 1; k <= l - i; k++)
        {
            cout << "*";
        }
        for( k = 1; k < l - i; k++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    getch();
    return 0;
}