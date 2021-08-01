#include <iostream>
#include <string>
/*
Penggunaan Program  : Tugas Struck CPP, PPT
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 16 November 2020
Materi Pembelajaran : Bahasa C++
*/
using namespace std;

// Variable Data
int i;
struct mahasiswa
{
    string _nama;
    int _NIM;
    float _tugas, _UTS, _UAS, _NA;
};

mahasiswa mhs[5];

int main(int argc, char const *argv[])
{
    // Script Mengimput Data
    cout << "Masukanlah tiap - tiap data mahasiswa !" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << endl << "Masukan Nama Mahasiswa ke " << i + 1 << endl;
        cin.ignore();
        getline (cin, mhs[i]._nama);
        cout << "Masukan NIM mahasiswa ke " << i + 1 << endl;
        cin >> mhs[i]._NIM;
        cout << "Masukan Nilai Tugas mahasiswa ke " << i + 1 << endl;
        cin >> mhs[i]._tugas;
        cout << "Masukan Nilai UTS mahasiswa ke " << i + 1 << endl;
        cin >> mhs[i]._UTS;
        cout << "Masukan Nilai UAS mahasiswa ke " << i + 1 << endl;
        cin >> mhs[i]._UAS;
    }
    
    // Script Menampilkan Data
    cout << endl << "keseluruhan data mahasiswa adalah :" << endl << endl;
    cout << "No. Data" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            mhs[i]._NA = ((mhs[i]._tugas*40)/100)+((mhs[i]._UTS*20)/100)+((mhs[i]._UAS*40)/100);
        }
        cout << i + 1 << ".  Nama Mahasiswa = " << mhs[i]._nama; 
        cout << "\n    NIM = " << mhs[i]._NIM;
        cout << "\n    Nilai Tugas = " << mhs[i]._tugas;
        cout << "\n    Nilai UTS = " << mhs[i]._UTS;
        cout << "\n    Nilai UAS = " << mhs[i]._UAS; 
        cout <<"\n    Nilai Akhir = " << mhs[i]._NA << endl << endl;
    }
    
    return 0;
}