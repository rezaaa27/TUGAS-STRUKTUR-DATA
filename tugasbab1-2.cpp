#include <iostream>
using namespace std;

int main() {
    float lebar, tinggi, luas, keliling;

    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
    cout << "Masukkan tinggi persegi panjang: ";
    cin >> tinggi;

    luas = lebar * tinggi;
    keliling = 2 * (lebar + tinggi);

    cout << "Luas = " << luas << endl;
    cout << "Keliling = " << keliling << endl;

    return 0;
}

