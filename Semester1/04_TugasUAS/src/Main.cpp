#include <iostream>
#include <stdlib.h>
#include <time.h>
/*
Penggunaan Program  : Tugas UAS CPP, Membuat Game Tebak Angka sederhana
Nama Pembuat        : Azmi Munif Hartono
NIM                 : 20210012
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 20 November 2020
Materi Pembelajaran : Bahasa C++
*/
using namespace std;

// Struk Data Variable Game
struct game
{
    int angkaRahasia = 0;
    int tebak;
    int jmlTebak = 0;
    int limitTebak = 5;
    bool kehabisanNebak = false;
}datagame;

// Pendeklarasian Class
void welcome();
void pengacakAngka();
void inputData();
void outputData();

int main(int argc, char const *argv[])
{
    // Alur Pemrosesan
    welcome();
    pengacakAngka();
    inputData();
    outputData();

    return 0;
}

// Menampilkan Tampilan Awal Menu Game
void welcome(){
    cout << "##########################################################\n";
    cout << "#        Selamat datang di game tebak angka !            #\n";
    cout << "#       Silakan Menabak angka dari angka 1-15 !          #\n";
    cout << "# Anda diberikan kesempatan untuk menebak hanya 5 kali ! #\n";
    cout << "##########################################################\n\n";
}

// Script Pengacakan Angka
void pengacakAngka(){
    int acak;
    srand (time(NULL));
    acak = rand() % 15 + 1;
    if (acak>datagame.angkaRahasia)
    {
        datagame.angkaRahasia=acak;
    }
}

// Script Input Data
void inputData(){
    int i;
    while (datagame.angkaRahasia != datagame.tebak && !datagame.kehabisanNebak)
    {
        if (datagame.jmlTebak < datagame.limitTebak)
        {   
            i = 4 - datagame.jmlTebak;
            cout << "Masukan Angka yang ingin anda tebak : ";
            cin >> datagame.tebak;
            if (datagame.tebak < datagame.angkaRahasia && datagame.jmlTebak < 4)
            {
                cout << "angka yang anda input dibawah target tebakan coba lagi !\n\n";
                cout << "Kesempatan Tersisa : " << i << endl;
            } 
            if (datagame.tebak > datagame.angkaRahasia && datagame.jmlTebak < 4)
            {
                cout << "angka yang anda input diatas target tebakan coba lagi !\n\n";
                cout << "Kesempatan Tersisa : " << i << endl;
            }
            datagame.jmlTebak++;            
        } else
        {
            datagame.kehabisanNebak = true;
        }
    }
}

// Script Output Data
void outputData(){
    if (datagame.kehabisanNebak)
    {
        cout << "\n\n";
        cout << "\t\t#######################\n";
        cout << "\t\t#   ...GAME OVER...   #\n";
        cout << "\t\t#######################\n\n\n";
        cout << "\tYah Kamu kalah :'(, Dicoba lagi ya ;) !\n\n";
    } else
    {
        cout << "\n\n";
        cout << "\t\t############################\n";
        cout << "\t\t#   !!!*** WINNER ***!!!   #\n";
        cout << "\t\t############################\n\n\n";
        cout << "\t\t     Kamu Menang Yeay !\n\n";
    }
}