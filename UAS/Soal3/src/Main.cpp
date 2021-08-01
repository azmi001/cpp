#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;
/*
Penggunaan Program  : Tugas UAS Soal 3
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 11 Desember 2020
Materi Pembelajaran : Bahasa C++
*/
int main ()
{
    system ("COLOR A");
    char nama[30], grade;
    int tugas, uts, uas, NilaiAkhir;

    cout<<endl<<endl;
    cout<<"\t--- PROGRAM MENGHITUNG NILAI AKHIR ---"<<endl<<endl;
    cout<<"\tMasukkan Nama Siswa : "; gets(nama);
    cout<<"\tMasukkan Nilai Tugas : "; cin>>tugas;
    cout<<"\tMasukkan Nilai uts : "; cin>>uts;
    cout<<"\tMasukkan Nilai uas : "; cin>>uas;

    tugas = tugas*30;
    uts = uts*35;
    uas = uas*35;
    NilaiAkhir = (tugas+uts+uas)/100;
    if (NilaiAkhir >= 80)
    {
        grade ='A';
    } else if (NilaiAkhir >= 70)
    {
        grade = 'B';
    } else if (NilaiAkhir >= 60) 
    {
        grade = 'C';
    } else {
        grade = 'E';

        //Tambahkan Algoritma untuk menghitung grade
        //grade A =>80
        //grade B =>70
        //grade C =>60
    }
    cout<<"\tJadi siswa yang bernama "<<nama<<" memperoleh nilai akhir sebesar "<<NilaiAkhir<<endl<<endl;
    cout<<"\tGrade nilai yang didapat adalah "<<grade<<endl;

    getch();
    system("cls");

    return 0;
}