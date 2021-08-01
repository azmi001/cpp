#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;
/*
Penggunaan Program  : Tugas UAS Soal 6
Nama Pembuat        : Azmi Munif Hartono
Kelas               : Game Tech 1C
Tanggal Pembuatan   : 11 Desember 2020
Materi Pembelajaran : Bahasa C++
*/
int main()
{
   system ("COLOR A");

   int i,a[4],j,dsc;

   cout<<"masukan 4 jumlah array: \n";
   for(i=0;i<=3;i++){
      cout<<"Input angka = ";
	   cin>>a[i];
   }

   cout<<"\nData sebelum sorting buble sort: ";
   for(j=0;j<4;j++){
      cout<<a[j];
   }
   //Tambahkan Algoritma untuk mengurutkan buble Sort
   //nilai terkecil hingga terbesar
   for(int c=1;c<4;c++)
   { 
      for(int d=0;d<4-c;d++)
         { 
            if(a[d]>a[d+1])
            { 
               dsc=a[d];
               a[d]=a[d+1];
               a[d+1]=dsc; 
            } 
         } 
   }

   cout<<"\nData Setelah sorting buble sort ";
   for(int i=0;i<4;i++)
   {
   cout << " " << a[i];
   } 
   cout << endl;

return 0;
}
