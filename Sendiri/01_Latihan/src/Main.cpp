#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
/*
TUGAS UAS
NAMA:RIZKI DWI SAPAUTRA
GAME SUIT
20210074
Gemtech 1B
*/

using namespace std;
main()
{
int acak, pilih;
srand(time(NULL));
awal:
acak = rand()%3;
cout<<"-------------- Permainan Suit Jawa --------------\n\n";
cout<<"\t--- Pilihan ---\n";
cout<<" [1]. Jari Jempol\n";
cout<<" [2]. Jari Telunjuk\n";
cout<<" [3]. Jari Kelingking\n";
cout<<" [4]. Keluar\n\n";
cout<<" Masukan Pilihan Anda : "; cin>>pilih;
cout<<endl;
if(pilih == 1)
{
cout<<"Pilihan Kamu\t\t: Jari Jempol\n";
if(acak == 0)
{
cout<<"Pilihan Bot\t: Jari Jempol\n\n";
cout<<"\t- SERI -";
}
else if(acak == 1)
{
cout<<"Pilihan Bot\t: Jari Kelingking\n\n";
cout<<"\t - KAMU PAYAH KALAH SAMA BOT :P ";
}
else if(acak == 2)
{
cout<<"Pilihan Bot\t: Jari Telunjuk\n\n";
cout<<"\t - HORE KAMU MENANG T_T -";
}
}
else if(pilih == 2)
{
cout<<"Pilihan Kamu\t\t: Jari Kelingking\n";
if(acak == 0)
{
cout<<"Pilihan Bot\t: Jari Jempol\n\n";
cout<<"\t- HORE KAMU MENANG T_T -";
}
else if(acak == 1)
{
cout<<"Pilihan Bot\t: Jari Kelingking\n\n";
cout<<"\t - SERI -";
}
else if(acak == 2)
{
cout<<"Pilihan Botr\t: Jari Telunjuk\n\n";
cout<<"\t - KAMU PAYAH KALAH SAMA BOT :P ";
}
}
else if(pilih == 3)
{
cout<<"Pilihan Kamu\t\t: Jari Telunjuk\n";
if(acak == 0)
{
cout<<"Pilihan Bot\t: Jari Jempol\n\n";
cout<<"\t- KAMU PAYAH KALAH SAMA BOT:P ";
}
else if(acak == 1)
{
cout<<"Pilihan Botr\t: Jari Kelingking\n\n";
cout<<"\t - HORE KAMU MENANG T T_T -";
}
else if(acak == 2)
{
cout<<"Pilihan Bot\t: Jari Telunjuk\n\n";
cout<<"\t - SERI -";
}
}
else if(pilih == 4)
{
cout<<"\n\n KALO KAMU KELUAR BERARTI KAMU NOOB";
getch();
return 0;
}
else if(pilih > 4)
{
cout<<"\n Pilihan Yang Kamu Pilih Tidak Tersedia\n";
getch();
goto awal;
}
getch();
system("cls");
goto awal;
}
