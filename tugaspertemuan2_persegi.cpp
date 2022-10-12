#include <iostream>
using namespace std;

int main ()
{
    //PERSEGI
    int s1, s2, luasPersegi;

    cout << "Kita akan menghitung luas persegi !!" << endl;

    //Menentukan nilai sisi 1 dan sisi 2
    cout << "\nMasukan nilai sisi ke 1 dan sisi ke 2 : ";
    cin >> s1 >> s2;

    luasPersegi = s1 * s2;
    cout << "Inilah hasil luas dari perseginya = " << luasPersegi << endl;

    return 0;
}
