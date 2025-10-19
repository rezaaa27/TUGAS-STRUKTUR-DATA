#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "=== Soal 1: Array 1D char x[12] ===" << endl;

    int base = 0x1000; 
    int ukuran = 1;    
    int index = 8;     

    int alamat = base + (index * ukuran);

    cout << "&x[8] = " << uppercase << hex << alamat << "H" << endl;
    return 0;
}

