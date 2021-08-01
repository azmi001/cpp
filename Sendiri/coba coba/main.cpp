#include <iostream>

using namespace std;

int main()
{
    struct tipeUjian
    {
        string nim;
        string nama;
        int nilai[3];
    };

    int jumlahMahasiswa = 0;
    tipeUjian mhs[jumlahMahasiswa];
    cout << "Masukan berapa Banyak Data Mahasiswa : ";
    cin >> jumlahMahasiswa;
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        //cin.ignore();
        cout << "Masukan NIM Mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << "Masuk10an Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);
    /*
        for (j = 0; j < 3; i++)
        {
            cout << "Masukan Nilai ke " << i + 1;
            cin >> mhs[i].nilai[j];
        }
    */
    }
}
