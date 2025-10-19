#include <iostream>
using namespace std;

#define MAX 10

int main() {
    int S[MAX];
    int top = -1;
    int data;

    cout << "Proses PUSH sampai stack penuh:\n";
    while (top < MAX - 1) {
        cout << "Masukkan data: ";
        cin >> data;

        top++;
        S[top] = data;
        cout << "Data " << data << " telah diPush ke stack.\n";
    }

    cout << "Stack Penuh!" << endl;
    return 0;
}

