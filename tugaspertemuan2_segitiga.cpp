#include <iostream>
using namespace std;

int main ()
{
    //segitiga
    double alas, tinggi, luasSegitiga;

    cout << "Kita akan menghitung luas dari segitiga \nSebelum itu mari kita tentukan terlebih dahulu nilai alas dan tingginya." << endl;

    //Menentukan nilai alas dan tinggi
    cout << "\nMasukan nilai alas dan tinggi : ";
    cin >> alas >> tinggi;

    luasSegitiga = 0.5 * alas * tinggi;
    cout << "Berikut adalah luas dari segitiganya = " << luasSegitiga << endl;

    return 0;
}
