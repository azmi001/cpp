#include <iostream>
#include <string>
/*
Penggunaan Program  : Tugas Function CPP, PPT
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 18 November 2020
Materi Pembelajaran : Bahasa C++
*/
using namespace std;

// Variable Data
struct Mahasiswa
{
    string _nama;
    int _NIM;
    float _tugas, _UTS, _UAS, _NA;
}mhs[5];

void input();
void proses();
void output();

int main(int argc, char const *argv[]){
    input();
    proses();
    output();
    return 0;
}

// Script Imput Data
void input(){
    cout << "Masukan 5 Data Mahasiswa\nyang ingin anda imput.\n\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Data Mahaiswa Ke " << i + 1<< endl;
        cout << "Masukan Nama : ";
        cin.ignore();
        getline (cin, mhs[i]._nama);
        cout << "Masukan NIM : ";
        cin >> mhs[i]._NIM;
        cout << "Masukan Nilai Tugas : ";
        cin >> mhs[i]._tugas;
        cout << "Masukan Nilai UTS : ";
        cin >> mhs[i]._UTS;
        cout << "Masukan Nilai UAS : ";
        cin >> mhs[i]._UAS;
        cout << endl;
    }
}

// Script Proses
void proses(){
    for (int i = 0; i < 5; i++)
        {
            mhs[i]._NA = ((mhs[i]._tugas*40)/100)+((mhs[i]._UTS*20)/100)+((mhs[i]._UAS*40)/100);
        }
}

// Script Menampilkan Data
void output(){
    cout << endl << "keseluruhan data mahasiswa adalah :" << endl << endl;
    cout << "No. Data" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ".  Nama Mahasiswa = " << mhs[i]._nama; 
        cout << "\n    NIM = " << mhs[i]._NIM;
        cout << "\n    Nilai Tugas = " << mhs[i]._tugas;
        cout << "\n    Nilai UTS = " << mhs[i]._UTS;
        cout << "\n    Nilai UAS = " << mhs[i]._UAS; 
        cout << "\n    Nilai Akhir = " << mhs[i]._NA << "\n\n";
    }
}