#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 29 September 2020
Materi Pembelajaran : Bahasa C++
*/
int main(int argc, char const *argv[]) {
/*
Operator Penugasan
Operator penugasan digunakan untuk menetapkan nilai ke variabel.

Dalam contoh di bawah ini, kami menggunakan 
operator penugasan (=) untuk menetapkan 
nilai 10 ke variabel yang disebut x:
*/ 

/*
Daftar semua operator penugasan:

Operator	Contoh	    Sama Seperti
=	        x = 5	    x = 5	
+=	        x += 3	    x = x + 3	
-=	        x -= 3	    x = x - 3	
*=	        x *= 3	    x = x * 3	
/=	        x /= 3	    x = x / 3	
%=	        x %= 3	    x = x % 3	
&=	        x &= 3	    x = x & 3	
|=	        x |= 3	    x = x | 3	
^=	        x ^= 3	    x = x ^ 3	
>>=	        x >>= 3	    x = x >> 3	
<<=	        x <<= 3	    x = x << 3
*/
    int a = 5;
    cout << "Hasil a = " << a << endl;

    int b = 5;
    b += 3;
    cout << "Hasil b = " << b << endl;

    int c = 5;
    c -= 3;
    cout << "Hasil c = " << c << endl;

    int d = 5;
    d *= 3;
    cout << "Hasil d = " << d << endl;

    int e = 5;
    e /= 3;
    cout << "Hasil e = " << e << endl;

    int f = 5;
    f %= 3;
    cout << "Hasil f = " << f << endl;

    int g = 5;
    g &= 3;
    cout << "Hasil g = " << g << endl;

    int h = 5;
    h |= 3;
    cout << "Hasil h = " << h << endl;

    int i = 5;
    i ^= 3;
    cout << "Hasil i = " << i << endl;

    int j = 5;
    j >>= 3;
    cout << "Hasil j = " << j << endl;

    int k = 5;
    k <<= 3;
    cout << "Hasil k = " << k << endl;

    return 0;
}