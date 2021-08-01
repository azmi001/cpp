#include <iostream>
/*
Penggunaan Program  : Tugas CPP Array Membuat inputan untuk character 
                      yang dicari , Tampilkan seluruh input dan yang 
                      dicari dan tampilkan jumlah character yang 
                      dicari 2 character 
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 5 November 2020
Materi Pembelajaran : Bahasa C++
*/
using namespace std;

int main(int argc, char const *argv[])
{
    // Data Variable
    char data1, data2, TabChar[10];
    int i, count1 = 0, count2 = 0;

    // Rumus
    cout << "Masukan 2 character yang ingin dihitung secara automatis";
    cout << "Masukan character Pertama = " << endl;
    cin >> data1;
    cout << "Masukan character Kedua = " << endl;
    cin >> data2;
    cout << "Inputkan 10 character! " << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> TabChar[i];
    }
    for (i = 0; i < 10; i++)
    {
        if (TabChar[i]== data1)
        {
            count1++;
        }
        if (TabChar[i]== data2)
        {
            count2++;
        }
    }

    // Menampilkan data di layar
    cout << "Banyaknya Data " << data1 << " Adalah " << count1 << endl;
    cout << "Banyaknya Data " << data2 << " Adalah " << count2 << endl;

    return 0;
}