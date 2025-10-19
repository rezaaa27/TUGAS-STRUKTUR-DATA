#include <iostream>
#include <string>
using namespace std;

#define MAX 10

int main() {
    string queue[MAX] = {"A", "B", "C", "D", "E"}; // contoh isi awal
    int front = 0, rear = 4; // ada 5 data (index 0-4)
    int count = 0;

    cout << "=== 2. Menghapus Antrian Record Maksimal 10 Record ===\n";
    while (count < 10 && front <= rear) {
        cout << "Record yang dihapus: " << queue[front] << endl;
        front++;
        count++;
    }

    if (front > rear)
        cout << "Antrian kosong, proses delete dihentikan.\n";
    else
        cout << "Delete berhenti setelah 10 record.\n";

    return 0;
}

