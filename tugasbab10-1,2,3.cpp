#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    cout << "============================================\n";
    cout << "    TUGAS STRUKTUR DATA - PENJELASAN KONSEP\n";
    cout << "============================================\n\n";

    // ====== 1. Konsep LIFO ======
    cout << "1. Pengertian Konsep LIFO (Last In First Out)\n";
    cout << "--------------------------------------------\n";
    cout << "LIFO adalah konsep di mana data yang dimasukkan TERAKHIR\n";
    cout << "akan dikeluarkan atau diambil PERTAMA kali.\n";
    cout << "Struktur data yang menggunakan konsep LIFO adalah STACK.\n\n";

    // Contoh simulasi LIFO menggunakan stack
    stack<string> lifo;
    lifo.push("Data 1");
    lifo.push("Data 2");
    lifo.push("Data 3");

    cout << "Contoh urutan masuk Stack: Data1 -> Data2 -> Data3\n";
    cout << "Proses keluarnya (LIFO):\n";
    while (!lifo.empty()) {
        cout << lifo.top() << " keluar dari stack.\n";
        lifo.pop();
    }
    cout << endl;

    // ====== 2. Konsep FIFO ======
    cout << "2. Pengertian Konsep FIFO (First In First Out)\n";
    cout << "----------------------------------------------\n";
    cout << "FIFO adalah konsep di mana data yang masuk PERTAMA\n";
    cout << "akan dikeluarkan atau dilayani PERTAMA kali juga.\n";
    cout << "Struktur data yang menggunakan konsep FIFO adalah QUEUE.\n\n";

    // Contoh simulasi FIFO menggunakan queue
    queue<string> fifo;
    fifo.push("Data 1");
    fifo.push("Data 2");
    fifo.push("Data 3");

    cout << "Contoh urutan masuk Queue: Data1 -> Data2 -> Data3\n";
    cout << "Proses keluarnya (FIFO):\n";
    while (!fifo.empty()) {
        cout << fifo.front() << " keluar dari queue.\n";
        fifo.pop();
    }
    cout << endl;

    // ====== 3. Penerapan STACK dengan Array ======
    cout << "3. Penerapan Aplikasi STACK dengan Array\n";
    cout << "----------------------------------------\n";
    cout << "Stack dapat diimplementasikan menggunakan array,\n";
    cout << "dengan operasi PUSH (tambah) dan POP (hapus).\n\n";

    const int MAX = 5;
    string stackArray[MAX];
    int top = -1;

    // Operasi PUSH (menambah data)
    cout << "Operasi PUSH (menambah data):\n";
    if (top < MAX - 1) stackArray[++top] = "A";
    if (top < MAX - 1) stackArray[++top] = "B";
    if (top < MAX - 1) stackArray[++top] = "C";

    cout << "Isi stack saat ini: ";
    for (int i = 0; i <= top; i++) {
        cout << stackArray[i] << " ";
    }
    cout << endl;

    // Operasi POP (menghapus data)
    cout << "\nOperasi POP (menghapus data):\n";
    while (top >= 0) {
        cout << stackArray[top] << " dihapus dari stack.\n";
        top--;
    }

    cout << "\nKesimpulan:\n";
    cout << "- LIFO digunakan pada struktur STACK.\n";
    cout << "- FIFO digunakan pada struktur QUEUE.\n";
    cout << "- STACK dapat dibuat dengan ARRAY dan operasi PUSH/POP.\n";

    cout << "\n============================================\n";
    cout << "Program selesai.\n";
    cout << "============================================\n";

    return 0;
}

