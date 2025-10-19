#include <iostream>
using namespace std;

#define MAX 10  // ukuran maksimum array

int Stack[MAX];  // array utama untuk menampung 2 stack
int TOP1 = -1;   // posisi teratas stack1
int TOP2 = MAX;  // posisi teratas stack2 (dimulai dari ujung kanan)

// ===================================================
// Fungsi PUSH2 - Menambahkan data ke Stack2
// ===================================================
void PUSH2(int data) {
    if (TOP2 - 1 == TOP1) {
        cout << "? Stack2 PENUH, tidak bisa menambah data!\n";
        return;
    }
    TOP2--;
    Stack[TOP2] = data;
    cout << "? Data " << data << " berhasil dimasukkan ke Stack2 di posisi " << TOP2 << ".\n";
}

// ===================================================
// Fungsi POP2 - Menghapus satu data dari Stack2
// ===================================================
int POP2() {
    if (TOP2 == MAX) {
        cout << "??  Stack2 KOSONG, tidak ada data untuk dihapus.\n";
        return -999; // nilai penanda stack kosong
    }
    int data = Stack[TOP2];
    TOP2++;
    return data;
}

// ===================================================
// Fungsi tampilkan semua isi Stack2
// ===================================================
void tampilStack2() {
    if (TOP2 == MAX) {
        cout << "(Stack2 kosong)\n";
        return;
    }
    cout << "Isi Stack2 (dari bawah ke atas): ";
    for (int i = MAX - 1; i >= TOP2; i--) {
        cout << Stack[i] << " ";
    }
    cout << endl;
}

// ===================================================
// Fungsi untuk menghapus semua isi Stack2 (POP2 satu per satu)
// ===================================================
void hapusSemuaStack2() {
    cout << "\n=== PROSES PENGAMBILAN ISI STACK2 ===\n";
    if (TOP2 == MAX) {
        cout << "Stack2 kosong, tidak ada yang bisa dihapus.\n";
        return;
    }

    while (TOP2 != MAX) {
        int data = POP2();
        if (data != -999)
            cout << "POP2: Data " << data << " dihapus dari Stack2.\n";
    }
    cout << "? Semua data di Stack2 sudah dihapus, Stack2 sekarang kosong.\n";
}

// ===================================================
// Program utama
// ===================================================
int main() {
    int pilihan, data;

    do {
        cout << "\n========== MENU STACK2 ==========" << endl;
        cout << "1. PUSH2 (Isi Stack2)" << endl;
        cout << "2. Tampilkan isi Stack2" << endl;
        cout << "3. Hapus semua isi Stack2 (POP2 sampai kosong)" << endl;
        cout << "0. Keluar" << endl;
        cout << "=================================" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data untuk Stack2: ";
                cin >> data;
                PUSH2(data);
                break;
            case 2:
                tampilStack2();
                break;
            case 3:
                hapusSemuaStack2();
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

