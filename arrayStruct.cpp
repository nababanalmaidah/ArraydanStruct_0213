#include <iostream>
using namespace std;

struct DetailAlamat
{
    string desa;
    string kota;;
};
struct Orang
{
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main() {
    Orang mhs[3];
    
    for (int i = 0; i <= 2; i++)
    {