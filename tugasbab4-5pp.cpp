#include <iostream>
using namespace std;

#define MAX 10

int main() {
    int top;
    cout << "Masukkan nilai TOP (misal -1, 0, 5, 9): ";
    cin >> top;

    if (top == -1)
        cout << "Kondisi: Stack Kosong" << endl;
    else if (top == MAX - 1)
        cout << "Kondisi: Stack Penuh" << endl;
    else if (top >= 0 && top < MAX - 1)
        cout << "Kondisi: Stack bisa diisi (ada ruang kosong)" << endl;
    else
        cout << "Nilai top tidak valid." << endl;

    return 0;
}

