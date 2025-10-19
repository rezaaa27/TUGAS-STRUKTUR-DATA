#include <iostream>
#include <string>
using namespace std;

#define MAX 10

int main() {
    string queue[MAX];
    int rear = -1;
    int count = 0;
    string data;

    cout << "=== 1. Mengisi Antrian Record Maksimal 10 Record ===\n";
    while (count < 10 && rear < MAX - 1) {
        cout << "Masukkan record ke-" << count + 1 << ": ";
        getline(cin, data);
        rear++;
        queue[rear] = data;
        count++;
        cout << "Record berhasil dimasukkan ke antrian!\n";
    }

    if (rear == MAX - 1)
        cout << "Antrian penuh, proses pengisian dihentikan.\n";
    else
        cout << "Pengisian selesai sebelum mencapai 10 record.\n";

    return 0;
}

