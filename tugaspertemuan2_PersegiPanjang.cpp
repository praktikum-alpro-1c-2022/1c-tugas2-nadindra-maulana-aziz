#include <iostream>
using namespace std;

int main ()
{
    //Persegi Panjang
    int panjang, lebar, luasPersegiPanjang;

    cout << "Kita akan menghitung luas dari persegi panjang \nSebelum itu mari kita tentukan terlebih dahulu nilai panjang dan lebarnya." << endl;

    //Menentukan nilai panjang dan lebar
    cout << "\nMasukan nilai panjang dan lebar : ";
    cin >> panjang >> lebar;

    luasPersegiPanjang = panjang * lebar;
    cout << "Berikut adalah luas dari persegi panjangnya = " << luasPersegiPanjang << endl;

    return 0;
}
