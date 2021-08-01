#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;
/*
Penggunaan Program  : Tugas UAS Soal 5
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 11 Desember 2020
Materi Pembelajaran : Bahasa C++
*/
void MenaraHanoi(int N, char asal, char bantu, char tujuan)
{
    if( N == 1)
        cout<<"Piringan 1 dari "<<asal<< " ke " << tujuan <<endl;
    else
        {
            MenaraHanoi(N-1,asal,tujuan, bantu);
            cout<<"Piringan " << N <<" dari " << asal << " ke " << tujuan<<endl;
            MenaraHanoi(N-1, bantu, asal, tujuan);
        }
}

int main()
{
system ("COLOR A");

int piringan;

cout<< "\nPROGRAM MENARA HANOI\n";
cout<< "--------------------\n\n";
cout<< "Banyaknya piringan: ";
cin >> piringan;
cout<< endl;
MenaraHanoi(piringan, 'A', 'B', 'C');
//Tuliskan cara memanggil fungsi
//MenaraHanoi

return 0;
}