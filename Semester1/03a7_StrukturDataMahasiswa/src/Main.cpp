#include <iostream>
//#include <string>
/*
Penggunaan Program  : Tugas Struck CPP, Tambahkan dengan input 
                      min 3 data, cek nilai akhir terbesar dan 
                      tampilkan seluruh data mahasiswa dan 
                      tampilkan mahasiswa nilai terbesar
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 16 November 2020
Materi Pembelajaran : Bahasa C++
*/
using namespace std;

// struck data
struct tipeUjian
    {
        string nim;
        string nama;
        int nilai[3];
    };

int main()
{   
    // Data Static
    tipeUjian mhs[3];
    mhs[0]={"20202122","budi",{70,80,90}};
    mhs[1]={"20202123","dudi",{85,85,80}};
    mhs[2]={"20202124","tono",{80,90,80}};

    // Rumus Script
    int nilaiakhir[3];
    int jml[3];
    for (int i = 0; i < 3; i++)
    {
        jml[0]=(mhs[i].nilai[0]*40);
        jml[1]=(mhs[i].nilai[1]*20);
        jml[2]=(mhs[i].nilai[2]*40);
        nilaiakhir[i]=((jml[0]+jml[1]+jml[2])/100);
    }
    
    // Menampilkan data ke layar
    cout << "Data Mahasiswa" << endl;
    for (int j = 0; j < 3; j++)
    {
        cout << "Data Mahasiswa Ke " << j + 1 << endl;
        cout << "NIM    : " << mhs[j].nim << endl;
        cout << "Nama   : " << mhs[j].nama << endl;
        cout << "Nilai  : " << nilaiakhir[j] << endl << endl;
    }
    cout << endl;
    
    // Menampilkan Nilai Akhir Terbesar
    int max = nilaiakhir[0];
    for (int a = 0; a < 3; a++)
    {
        if (nilaiakhir[a]>max)
        {
            max=nilaiakhir[a];
        }
        
    }
    
    cout << "Nilai Terbesar : " << max << endl;

    return 0;
}