#include <iostream>
using namespace std;

int main ()
{
    //Lingkaran
    double jari_jari, phi, luasLingkaran;

    cout << "Kita akan menghitung luas dari lingkaran \nSebelum itu mari kita tentukan terlebih dahulu nilai jari-jarinya." << endl;

    //Menentukan nilai jari-jari
    phi = 3.14;
    cout << "\nMasukan nilai jari jari : ";
    cin >> jari_jari;

    luasLingkaran = phi * jari_jari * jari_jari;
    cout << "Berikut adalah luas dari lingkarannya = " << luasLingkaran << endl;

    return 0;
}
