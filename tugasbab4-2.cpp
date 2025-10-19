#include <iostream>
using namespace std;

#define MAX 10

int main() {
    int S[MAX];
    int top = -1;
    int data;

    cout << "Masukkan data (999 untuk berhenti):" << endl;

    while (true) {
        cout << "Input data: ";
        cin >> data;

        if (data == 999) break; 
        if (top == MAX - 1) {
            cout << "Stack Penuh!" << endl;
            break;
        }

        top++;
        S[top] = data;
    }

    // Proses POP
    cout << "\nMengeluarkan isi stack:\n";
    while (top >= 0) {
        cout << "Data " << S[top] << " dikeluarkan." << endl;
        top--;
    }

    cout << "Stack sekarang kosong." << endl;
    return 0;
}

