#include <iostream>
using namespace std;

#define MAX 10  // ukuran maksimum array

int Stack[MAX];  // array utama yang digunakan sebagai double stack
int TOP1 = -1;   // posisi teratas stack1
int TOP2 = MAX;  // posisi teratas stack2 (tidak dipakai di soal ini)

// ===================================================
// Fungsi PUSH1 - Menambahkan data ke Stack1
// ===================================================
void PUSH1(int data) {
    if (TOP1 + 1 == TOP2) {
        cout << "? Stack1 PENUH, tidak bisa menambah data!\n";
        return;
    }
    TOP1++;
    Stack[TOP1] = data;
    cout << "? Data " << data << " berhasil dimasukkan ke Stack1 di posisi " << TOP1 << ".\n";
}

// ===================================================
// Fungsi POP1 - Menghapus satu data dari Stack1
// ===================================================
int POP1() {
    if (TOP1 == -1) {
        cout << "??  Stack1 KOSONG, tidak ada data untuk diambil.\n";
        return -999; // nilai penanda stack kosong
    }
    int data = Stack[TOP1];
    TOP1--;
    return data;
}

// ===================================================
// Fungsi tampilkan semua isi Stack1
// ===================================================
void tampilStack1() {
    if (TOP1 == -1) {
        cout << "(Stack1 kosong)\n";
        return;
    }
    cout << "Isi Stack1 (dari bawah ke atas): ";
    for (int i = 0; i <= TOP1; i++) {
        cout << Stack[i] << " ";
    }
    cout << endl;
}

// ===================================================
// Fungsi utama untuk menghapus isi Stack1 satu per satu
// ===================================================
void hapusSemuaStack1() {
    cout << "\n=== PROSES PENGAMBILAN ISI STACK1 ===\n";
    if (TOP1 == -1) {
        cout << "Stack1 kosong, tidak ada yang bisa dihapus.\n";
        return;
    }

    while (TOP1 != -1) {
        int data = POP1();
        if (data != -999)
            cout << "POP1: Data " << data << " dihapus dari Stack1.\n";
    }
    cout << "? Semua data di Stack1 sudah dihapus, Stack1 sekarang kosong.\n";
}

// ===================================================
// Program utama
// ===================================================
int main() {
    int pilihan, data;

    do {
        cout << "\n========== MENU STACK1 ==========" << endl;
        cout << "1. PUSH1 (Isi Stack1)" << endl;
        cout << "2. Tampilkan isi Stack1" << endl;
        cout << "3. Hapus semua isi Stack1 (POP1 sampai kosong)" << endl;
        cout << "0. Keluar" << endl;
        cout << "=================================" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data untuk Stack1: ";
                cin >> data;
                PUSH1(data);
                break;
            case 2:
                tampilStack1();
                break;
            case 3:
                hapusSemuaStack1();
                break;
            case 0:
                cout << "\nProgram selesai. Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 0);

    return 0;
}

