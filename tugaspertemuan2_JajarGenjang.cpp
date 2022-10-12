#include <iostream>
using namespace std;

int main ()
{
    //Jajar Genjang
    double alas, tinggi, luasJajarGenjang;

    cout << "Kita akan menghitung luas dari jajar genjang \nSebelum itu mari kita tentukan terlebih dahulu nilai alas dan tingginya." << endl;

    //Menentukan nilai alas dan tinggi
    cout << "\nMasukan nilai alas dan tinggi : ";
    cin >> alas >> tinggi;

    luasJajarGenjang = alas * tinggi;
    cout << "Berikut adalah luas dari jajar genjangnya = " << luasJajarGenjang << endl;

    return 0;
}
