#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "=== Soal 5: Array 3D int x[2][3][5] ===" << endl;

    int alamatDiketahui = 0x12EF; 
    int ukuran = 4;               
    int A = 2, B = 3, C = 5;

    int offset_diketahui = ((1 * B * C) + (1 * C) + 4) * ukuran;
    int base = alamatDiketahui - offset_diketahui; 

    int offset_dicari = ((0 * B * C) + (0 * C) + 3) * ukuran;
    int alamat_dicari = base + offset_dicari;

    cout << "&x[0][0][3] = " << uppercase << hex << alamat_dicari << "H" << endl;
    return 0;
}

