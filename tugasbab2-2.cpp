#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "=== Soal 2: Array 1D int x[15] ===" << endl;

    int ukuran = 4;    
    int index_diketahui = 3;
    int alamat_diketahui = 0x1000; 

    int base = alamat_diketahui - (index_diketahui * ukuran);
    int index_dicari = 9;

    int alamat_dicari = base + (index_dicari * ukuran);

    cout << "&x[9] = " << uppercase << hex << alamat_dicari << "H" << endl;
    return 0;
}

