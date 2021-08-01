#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;
/*
Penggunaan Program  : Tugas UAS Soal 1
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 11 Desember 2020
Materi Pembelajaran : Bahasa C++
*/
int main ()
{
    system ("COLOR A");
    int a,n,bil,max=0;
    cout<<"Banyak Angka n = ";
    cin>>n; //untuk berapa kali inputan
    //Untuk Algoritma untuk perulangan inputan
    for (int i = 0; i < n; i++)
    {
        cout<<"Input Bilangan = ";
        cin>>bil;
        //untuk menginput bilangan
        if (bil > max)
        {
            max = bil;
        }
    }
    //bandingan untuk mencari angka terbesar
    cout<<endl;
    cout<<"Bilangan Terbesar = " << max;
    getch() ;
    return 0;
}
