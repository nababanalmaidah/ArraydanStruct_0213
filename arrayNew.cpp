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
        cout << "Data index 4 = ";
        cin >> kamu[4];
        cout << end1;
            // Menampilkan Satu per Satu
            cout << "Data Pertama = "<< kamu[0] << end1;
            cout << "Data Kedua = " kamu[1] << end1;
            cout << "Data Ketiga = " kamu[2] << end1;
            cout << "Data Keempat = " kamu[3] << end1;

            // Mengisi dengan menggunakan perulangan for
            for (int i = 0; i <= 4; i++)
            {
                cout << "Data index ke-" << i << " = ";
                cin >> kamu[i];
            }
                cout << end1;
                // Menampilkan dengan menggunakan perulangan for
                for (int i = 0; i <= 4; i++)
                {
                    cout << "Data ke-" << i+1 << " = " << kamu[i] << end1;
                }
                
