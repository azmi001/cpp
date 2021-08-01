#include <iostream>
/*
Penggunaan Program  : Tugas CPP Array urutan Nilai Kecil Ke Besar
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 5 November 2020
Materi Pembelajaran : Bahasa C++
*/
using namespace std;

int main(int argc, char const *argv[])
{
    // Variable data
    int x, nilai, i, a, sum, Neff, temp;
    float rata;
    int TI[100];

    // Script
    cout << "Berapa banyak yang diinput ";
    cin >> x; i=0;
    while (i < x)
    {
        cout << "Masukan Nilai = ";
        cin >> nilai;
        TI[i] = nilai;
        i++;
    }
    Neff = i;
    i = 0; sum =0;
    while (i < Neff)
    {
        sum += TI[i];
        i++;
    }
    rata = sum/i;
    for(i=0;i<x;i++)
	{		
		for(a=i+1;a<x;a++)
		{
			if(TI[i]>TI[a])
			{
				temp  =TI[i];
				TI[i]=TI[a];
				TI[a]=temp;
			}
		}
	}   

    // Menampilkan data ke layar
    cout << "Banyaknya elemen = " << Neff << endl;
    cout << "Jumlah total elemen = " << sum << endl;
    cout << "Rata - rata nilai = " << rata << endl;
    cout << "Nilai yang telah di input secara berurutan = " << endl;
    for(i=0;i<x;i++)
    {
        cout<<TI[i]<<"\t";
    }

    return 0;
}