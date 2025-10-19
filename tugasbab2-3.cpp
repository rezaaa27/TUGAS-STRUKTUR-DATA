#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "=== Soal 3: Array 2D float x[5][8] ===" << endl;

    int base = 0x1000; 
    int ukuran = 4;    
    int baris = 2, kolom = 4, nKolom = 8;

    int alamat = base + (((baris * nKolom) + kolom) * ukuran);

    cout << "&x[2][4] = " << uppercase << hex << alamat << "H" << endl;
    return 0;
}

