#include <iostream>
#include <string>
/*
Penggunaan Program  : Tugas Struck CPP, Buat perbandingan 
                      kondisi tanggal tanggal dan 
                      tampilkan pesan
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 16 November 2020
Materi Pembelajaran : Bahasa C++
*/
using namespace std;

int main(int argc, char const *argv[])
{
    // Struck data
    struct tipeTanggal
    {
        int tanggal,bulan,tahun;
    };
    
    // Variable Data tgl
    tipeTanggal tglA,tglB;

    // Variable info 
    string pesanSama="Kedua Tanggal Sama";
    string PesanLebihKecil="Tanggal Pertama lebih kecil";
    string PesanLebihBesar="Tanggal Pertama lebih besar";

    // Mengimput data dari user
    cout << "input Tanggal pemisah gunakan spasi contoh :30 12 2020" << endl;
    cout << "Tanggal Pertama : ";
    cin >> tglA.tanggal >> tglA.bulan >> tglA.tahun;
    cout << "Tanggal Kedua : ";
    cin >> tglB.tanggal >> tglB.bulan >> tglB.tahun;

    // Logika pembandingan
    if(tglA.tahun == tglB.tahun)
    {
        if(tglA.bulan == tglB.bulan)
        {
            if(tglA.tanggal == tglB.tanggal)
            {
                cout << pesanSama << endl;
            }
            else
            {
                if(tglA.tanggal > tglB.tanggal)
                {
                    cout << PesanLebihBesar;
                }
                else
                {
                    cout << PesanLebihKecil;
                }
            }
            
        }
        else
        {
            if(tglA.bulan > tglB.bulan)
            {
                cout << PesanLebihBesar;
            }
            else
            {
                cout << PesanLebihKecil;
            }
        }
    }
    else
    {
        if(tglA.tahun > tglB.tahun)
        {
            cout << PesanLebihBesar;
        }
        else
        {
            cout << PesanLebihKecil;
        }
    }
    
    return 0;
}