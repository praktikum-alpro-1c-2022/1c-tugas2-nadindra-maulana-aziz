#include <iostream>
using namespace std;

int main ()
{
    //Belah Ketupat
    double d1, d2, luasBelahKetupat;

    cout << "Kita akan menghitung luas dari Belah Ketupat \nSebelum itu mari kita tentukan terlebih dahulu nilai diagonal 1 dan diagonal 2." << endl;

    //Menentukan nilai d1 dan d2
    cout << "\nMasukan nilai d1 dan d2 : ";
    cin >> d1 >> d2;

    luasBelahKetupat = 0.5 * d1 * d2;
    cout << "Berikut adalah luas dari Belah Ketupatnya = " << luasBelahKetupat << endl;

    return 0;
}
