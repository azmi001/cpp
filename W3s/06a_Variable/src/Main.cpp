#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 27 September 2020
Materi Pembelajaran : Bahasa C++
*/

/*
int = 123 atau -123 (angka bilangan bulat)
double = menyimpan angka decimal 19.99 atau -19.99
char = menyimpan variable karakter a b atau huruf apapun
string = menyimpan kata "Hello World". string biasanya diisi dengan petik 2 (")
bool =  menyimpan 2 statement true atau false atau salah atau benar
*/ 

int main(int argc, char const *argv[])
{
    // latihan belajar memainkan variable
    int nomorGua = 69;
    cout << nomorGua << endl << endl;
    int nomorGua2 = 18;
    nomorGua2 = 15;
    cout << nomorGua2 << endl << endl;
    cout << "Ayou KIta COBS COBS lagi" << endl << endl << endl;
    
    // latihan belajar memainkan variable 2
    int nomorGua3 = 5;                       // Interger (nomor tanpa deccimal)
    double nomorFloatGua = 5.99;            // Floating nomor point (nomor dengan decimal)
    char hurufGua = 'A';                    // Character
    string namaGua = "Azmi Munif Hartono";  // String (Sebuah Text)
    bool booleanGua = true;                 // Boolean (benar atau salah/true or false)
    // ayo kita gabungkan semua variable
    cout << "gua suka nomor " << nomorGua3 << " dan " << nomorFloatGua << endl;
    cout << "gua suka huruf " << hurufGua << " dan nama gua " << namaGua << " apakah benar ? " << booleanGua << endl << endl;
    
    //Melakukan operasi penjumlahan sederhana
    int x = 5;
    int y = 6;
    int z = x + y;
    cout << "jika Nilai x adalah 5 dan y adalah 6 \n maka hasil penjumlahan x dan y adalah ? \n jawaban = " << z;

    return 0;
}