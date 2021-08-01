#include <iostream>

using namespace std;

/*
Penggunaan Program  : Buat Latihan
Nama Pembuat        : Azmi Munif Hartono
Tanggal Pembuatan   : 29 Oktober 2020
Materi Pembelajaran : Bahasa C++
*/
int main(int argc, char const *argv[]) {
/*
C++ Short Hand If Else

Short Hand If...Else (Ternary Operator)
Ada juga short-hand if else, yang disebut 
sebagai operator terner karena terdiri 
dari tiga operan. Ini dapat digunakan 
untuk mengganti beberapa baris kode dengan 
satu baris. Ini sering digunakan untuk 
mengganti pernyataan simple if else:

Syntax
variable = (condition) ? expressionTrue : expressionFalse;

daripada menulis :
int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
*/ 
    //Example :
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;

    return 0;
}