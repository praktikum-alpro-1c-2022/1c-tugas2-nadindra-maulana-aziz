#include <iostream>
using namespace std;

int main ()
{
    //Layang layang
    double d1, d2, luasLayanglayang;

    cout << "Kita akan menghitung luas dari layang layang \nSebelum itu mari kita tentukan terlebih dahulu nilai diagonal 1 dan diagonal 2." << endl;

    //Menentukan nilai d1 dan d2
    cout << "\nMasukan nilai d1 dan d2 : ";
    cin >> d1 >> d2;

    luasLayanglayang = 0.5 * d1 * d2;
    cout << "Berikut adalah luas dari Layang layangnya = " << luasLayanglayang << endl;

    return 0;
}
