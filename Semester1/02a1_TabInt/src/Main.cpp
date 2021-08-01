#include <iostream>
#include <string>
/*
Penggunaan Program  : Tugas CPP Array Membuat inputan untuk nilai 
                      setiap TabInt , Tampilkan seluruh nilai 
                      input dan tampilkan nilai Max
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 5 November 2020
Materi Pembelajaran : Bahasa C++
*/
using namespace std;

int main(int argc, char const *argv[])
{
    // Rumus Script
    int idxmax = 0, i;
    int TabInt[10];
    for(i = 0; i<10; i++)
    {
        cout << "Masukan Nilai ke-" << i+1 <<": ";
        cin >> TabInt[i];
        cout << endl;
        if(TabInt[i] > idxmax)
        {
            idxmax = TabInt[i];
        }
    }
    // Menampilkan Data Ke Layar
    cout << "Index nilai maksimum : " << idxmax << ", dari TabInt ke : " << i << endl;
    return 0;
}