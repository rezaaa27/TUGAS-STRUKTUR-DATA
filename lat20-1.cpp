#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int n = 10;
    int data[n];

    // Generate data random
    srand(time(0));
    for (int i = 0; i < n; i++) {
        data[i] = rand() % 100;
    }

    cout << "Data awal: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl << endl;

    // Proses Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << "Bandingkan " << data[j]
                 << " dan " << data[j + 1];

            if (data[j] > data[j + 1]) {
                swap(data[j], data[j + 1]);
                cout << " -> ditukar";
            } else {
                cout << " -> tidak ditukar";
            }

            cout << endl;
        }
        cout << "Hasil sementara: ";
        for (int k = 0; k < n; k++) {
            cout << data[k] << " ";
        }
        cout << endl << endl;
    }

    cout << "Data akhir (terurut): ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}

