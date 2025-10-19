#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "=== Soal 4: Array 2D long x[12][14] ===" << endl;

    int base = 0x1000; 
    int ukuran = 8;    
    int baris = 2, kolom = 4, nKolom = 14;

    int alamat = base + (((baris * nKolom) + kolom) * ukuran);

    cout << "&x[2][4] = " << uppercase << hex << alamat << "H" << endl;
    return 0;
}

