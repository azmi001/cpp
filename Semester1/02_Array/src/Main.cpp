#include <iostream>
#include <string>
/*
Penggunaan Program  : Tugas CPP Array ppt
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 5 November 2020
Materi Pembelajaran : Bahasa C++
*/
using namespace std;

int main(int argc, char const *argv[])
{
    // Data Variable;
    int _NIM[5];
    string _Nama[5];
    float _tugas[5], _UTS[5], _UAS[5], _NA[5];
    int i;

    // Script Input Data
    cout << "Masukanlah tiap - tiap data mahasiswa !" << endl;
    for (i = 0; i < 5; i++)
    {   
        cout << endl << "Masukan Nama Mahasiswa ke " << i + 1 << endl;
        cin >> _Nama[i];
        cout << "Masukan NIM mahasiswa ke " << i + 1 << endl;
        cin >> _NIM[i];
        cout << "Masukan Nilai Tugas mahasiswa ke " << i + 1 << endl;
        cin >> _tugas[i];
        cout << "Masukan Nilai UTS mahasiswa ke " << i + 1 << endl;
        cin >> _UTS[i];
        cout << "Masukan Nilai UAS mahasiswa ke " << i + 1 << endl;
        cin >> _UAS[i];
    } 

    // Script Menampilkan Data
    cout << endl << "keseluruhan data mahasiswa adalah :" << endl << endl;
    cout << "No. Data" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            _NA[i] = ((_tugas[i]*40)/100)+((_UTS[i]*20)/100)+((_UAS[i]*40)/100);
        }
        cout << i + 1 << ".  Nama Mahasiswa = " << _Nama[i] << "\n    NIM = " << _NIM[i];
        cout << "\n    Nilai Tugas = " << _tugas[i] << "\n    Nilai UTS = " << _UTS[i];
        cout << "\n    Nilai UAS = " << _UAS[i] <<"\n    Nilai Akhir = " << _NA[i] << endl << endl;   
    }
    
    return 0 ;
}