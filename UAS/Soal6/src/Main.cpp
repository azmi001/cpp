#include <windows.h>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
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

int acak, pilih;
    srand(time(NULL)); //mengaktifkan random
    awal:
        acak = rand()%3; //mengacak angka 0-3
        cout<<"-------------- Permainan Batu Gunting Kertas --------------\n\n";
        cout<<"\t--- Pilihan ---\n";
        cout<<" [0]. Batu\n";
        cout<<" [1]. Kertas\n";
        cout<<" [2]. Gunting\n";
        cout<<" [3]. Keluar\n\n";
        cout<<" Masukan Pilihan Anda : ";
        cin>>pilih; //input angka
        cout<<endl;
        //Tambahkan Algoritma untuk pilihan diatas
        //
        switch(pilih)
        {
        	case 0:
        	{
        		if(acak==0)
        		{
        			cout << "Game Seri";
				}
				else if(acak==1)
				{
					cout << "Kamu Kalah";
				}
				else if(acak==2)
				{
					cout << "Kamu Menang";
				}
			}
        	case 1:
        	{
        		if(acak==0)
        		{
        			cout << "Kamu Menang";
				}
				else if(acak==1)
				{
					cout << "Game Seri";
				}
				else if(acak==2)
				{
					cout << "Kamu Kalah";
				}	
			}
        	case 2:
        	{
        		if(acak==0)
        		{
        			cout << "Kamu Kalah";
				}
				else if(acak==1)
				{
					cout << "Kamu Menang";
				}
				else if(acak==2)
				{
					cout << "Game Seri";
				}		
			}
        	case 3:
        	{
        		exit(0);
			}
        }
    getch();
    system("cls");
    goto awal;

return 0;
}
