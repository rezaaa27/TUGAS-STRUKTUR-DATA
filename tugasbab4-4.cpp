#include <iostream>
using namespace std;

#define MAX 10

int main() {
    int S[MAX];
    int top = 9; 

    for (int i = 0; i <= top; i++) {
        S[i] = (i + 1) * 10;
    }

    cout << "Proses POP sampai stack kosong:\n";
    while (top >= 0) {
        cout << "Data " << S[top] << " dikeluarkan.\n";
        top--;
    }

    cout << "Stack Kosong!" << endl;
    return 0;
}

