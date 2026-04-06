#include <iostream>
using namespace std;

int main() {
        // deklarasi dengan inisialisasi
        int aku[5] = {10,20,30,40,50};
        // deklarasi array tanpa inisialisasi
        int kamu [5];
        // tampilkan data (membaca data array)
        cout << "Data pada index 1 = " << aku[1] << end1;
        // ganti index ke 1(menulis data array)
        aku[1] = 200;
        cout << end1;
        cout << "Data pada index 1 = " << aku[1] << end1;
        cout << "Data index 0 = ";
        cin >> kamu[0];
        cout << "Data index 1 = ";
        cin >> kamu[1];
        cout << "Data index 2 = ";
        cin >> kamu[2];
        cout << "Data index 3 = ";
        cin >> kamu[3];
        cout << "Data index 4 = ";commit 3
        cin >> kamu[4];
        cout << end1;
        // menampilkan data dengan perintah satu persatu
    cout << "data pertama = " << datamu[0] << endl;
    cout << "data kedua = " << datamu[1] << endl;
    cout << "data ketiga = " << datamu[2] << endl;
    cout << "data keempat = " << datamu[3] << endl;
    cout << "data kelima = " << datamu[4] << endl;

    // mengisi data melalui perulangan
    for (int i = 0; i <= 4; i++)
    {
        cout << "Isikan data ke-" << (i + 1) << " : ";
        cin >> datamu[i];
    }

    // menampilkan data dengan perulangan
    for (int i = 0; i <= 4; i++)
    {
        cout << "Data ke-" << (i + 1) << " : " << datamu[i] << endl;
    }
           