#include <iostream>
using namespace std;

int main ()
{
    //Trapesium
    double a, b, tinggi, luasTrapesium;

    cout << "Kita akan menghitung luas dari trapesium \nSebelum itu mari kita tentukan terlebih dahulu nilai a, b, dan tingginya." << endl;

    //Menentukan nilai a, b, dan tinggi
    cout << "\nMasukan nilai a dan b : ";
    cin >> a >> b;
    cout << "Sekarang masukan nilai tingginya : ";
    cin >> tinggi;

    luasTrapesium = 0.5 * (a + b) * tinggi;
    cout << "Berikut adalah luas dari trapesiumnya = " << luasTrapesium << endl;

    return 0;
}
