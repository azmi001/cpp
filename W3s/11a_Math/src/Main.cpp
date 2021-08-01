#include <iostream>
#include <cmath>
// Sertakan perpustakaan cmath

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 29 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
int main(int argc, char const *argv[]) {
/*
C++ Math

C ++ memiliki banyak fungsi yang memungkinkan 
Anda melakukan tugas matematika pada angka.
*/ 
/*
Max dan min
Fungsi max (x, y) dapat digunakan untuk 
mencari nilai tertinggi dari x dan y:
*/
    cout << max(5, 10) << endl;
/* 
Dan fungsi min (x, y) dapat digunakan untuk 
mencari nilai terendah dari x dan y:
*/
    cout << min(5, 10) << endl;
/*
Fungsi lain, seperti sqrt (akar kuadrat), 
round (rounds a number) dan log (natural 
logarithm), dapat ditemukan di file header 
<cmath>:
*/
    cout << sqrt(64) << endl;
    cout << round(2.6) << endl;
    cout << log(2) << endl;

    return 0;
}
/*
Fungsi Matematika Lainnya
Daftar fungsi Matematika populer lainnya 
(dari pustaka <cmath>) dapat ditemukan pada 
tabel di bawah ini:

Function	    Description
abs(x)	        Mengembalikan nilai absolut dari x
acos(x)	        Mengembalikan arccosine dari x, dalam radian
asin(x)	        Menampilkan busur x, dalam radian
atan(x)	        Mengembalikan arktangen x, dalam radian
cbrt(x)	        Mengembalikan akar pangkat tiga dari x
ceil(x)	        Mengembalikan nilai x yang dibulatkan ke atas ke bilangan bulat terdekat
cos(x)	        Mengembalikan kosinus x, dalam radian
cosh(x)	        Mengembalikan kosinus hiperbolik x, dalam radian
exp(x)	        Mengembalikan nilai dari Ex
expm1(x)	    Mengembalikan ex -1
fabs(x)	        Mengembalikan nilai absolut dari x mengambang
fdim(x, y)	    Mengembalikan selisih positif antara x dan y
floor(x)	    Mengembalikan nilai x yang dibulatkan ke bawah ke bilangan bulat terdekatnya
hypot(x, y)	    Mengembalikan akar persegi (x2 + y2) tanpa luapan atau luapan perantara
fma(x, y, z)	Mengembalikan x * y + z tanpa kehilangan presisi
fmax(x, y)	    Mengembalikan nilai tertinggi dari x dan y mengambang
fmin(x, y)	    Mengembalikan nilai terendah dari x dan y mengambang
fmod(x, y)	    Mengembalikan sisa titik mengambang dari x / y
pow(x, y)	    Mengembalikan nilai x ke pangkat y
sin(x)	        Mengembalikan sinus dari x (x dalam radian)
sinh(x)	        Mengembalikan sinus hiperbolik dari nilai ganda
tan(x)	        Menampilkan garis singgung sudut
tanh(x)	        Mengembalikan tangen hiperbolik dari nilai ganda
*/