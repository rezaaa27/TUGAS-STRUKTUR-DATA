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

        // Selesai
        if (data == 999) {
            cout << "Proses selesai." << endl;
            break;
        }

        if (data >= 60) {
            if (top < MAX - 1) {
                top++;
                S[top] = data;
                cout << "Data " << data << " dimasukkan ke stack." << endl;
            } else {
                cout << "Stack Penuh!" << endl;
                break;
            }
        }

        else {
            if (top >= 0) {
                cout << "Data " << S[top] << " dikeluarkan dari stack." << endl;
                top--;
            } else {
                cout << "Stack Kosong!" << endl;
                break;
            }
        }
    }

    return 0;
}

