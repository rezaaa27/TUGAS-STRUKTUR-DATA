#include <iostream>
using namespace std;

#define MAX 10   // kapasitas maksimal stack

// Deklarasi array dan posisi TOP untuk dua stack
int Stack[MAX];
int TOP1 = -1;   // Stack1 dimulai dari kiri
int TOP2 = MAX;  // Stack2 dimulai dari kanan

// ===========================================================
// a. Mengisi Stack1 (PUSH1)
// ===========================================================
void PUSH1(int data) {
    cout << "\n[ALGORITMA DASAR PUSH1]" << endl;
    cout << "Langkah 1: Periksa apakah stack penuh..." << endl;
    if (TOP1 + 1 == TOP2) {
        cout << "Langkah 2: Stack penuh! Tidak bisa menambah data.\n";
        return;
    }
    cout << "Langkah 2: Stack belum penuh. Naikkan TOP1 satu posisi." << endl;
    TOP1++;
    cout << "Langkah 3: Simpan data ke posisi TOP1." << endl;
    Stack[TOP1] = data;
    cout << "Langkah 4: Data " << data << " berhasil dimasukkan ke Stack1 di posisi " << TOP1 << ".\n";
}

// ===========================================================
// b. Menghapus isi Stack1 (POP1)
// ===========================================================
void POP1() {
    cout << "\n[ALGORITMA DASAR POP1]" << endl;
    cout << "Langkah 1: Periksa apakah Stack1 kosong..." << endl;
    if (TOP1 == -1) {
        cout << "Langkah 2: Stack1 kosong! Tidak ada data yang bisa dihapus.\n";
        return;
    }
    cout << "Langkah 2: Ambil data di posisi TOP1 = " << TOP1 << "." << endl;
    int data = Stack[TOP1];
    cout << "Langkah 3: Data yang dihapus adalah: " << data << endl;
    cout << "Langkah 4: Turunkan TOP1 satu posisi." << endl;
    TOP1--;
    cout << "Langkah 5: Penghapusan selesai.\n";
}

// ===========================================================
// c. Mengisi Stack2 (PUSH2)
// ===========================================================
void PUSH2(int data) {
    cout << "\n[ALGORITMA DASAR PUSH2]" << endl;
    cout << "Langkah 1: Periksa apakah stack penuh..." << endl;
    if (TOP2 - 1 == TOP1) {
        cout << "Langkah 2: Stack penuh! Tidak bisa menambah data.\n";
        return;
    }
    cout << "Langkah 2: Stack belum penuh. Turunkan TOP2 satu posisi." << endl;
    TOP2--;
    cout << "Langkah 3: Simpan data ke posisi TOP2." << endl;
    Stack[TOP2] = data;
    cout << "Langkah 4: Data " << data << " berhasil dimasukkan ke Stack2 di posisi " << TOP2 << ".\n";
}

// ===========================================================
// d. Menghapus isi Stack2 (POP2)
// ===========================================================
void POP2() {
    cout << "\n[ALGORITMA DASAR POP2]" << endl;
    cout << "Langkah 1: Periksa apakah Stack2 kosong..." << endl;
    if (TOP2 == MAX) {
        cout << "Langkah 2: Stack2 kosong! Tidak ada data yang bisa dihapus.\n";
        return;
    }
    cout << "Langkah 2: Ambil data di posisi TOP2 = " << TOP2 << "." << endl;
    int data = Stack[TOP2];
    cout << "Langkah 3: Data yang dihapus adalah: " << data << endl;
    cout << "Langkah 4: Naikkan TOP2 satu posisi." << endl;
    TOP2++;
    cout << "Langkah 5: Penghapusan selesai.\n";
}

// ===========================================================
// Fungsi menampilkan isi kedua stack (untuk simulasi)
// ===========================================================
void tampilStack() {
    cout << "\n=== KONDISI SAAT INI ===" << endl;

    cout << "Isi Stack1: ";
    if (TOP1 == -1)
        cout << "(kosong)";
    else {
        for (int i = 0; i <= TOP1; i++)
            cout << Stack[i] << " ";
    }

    cout << "\nIsi Stack2: ";
    if (TOP2 == MAX)
        cout << "(kosong)";
    else {
        for (int i = MAX - 1; i >= TOP2; i--)
            cout << Stack[i] << " ";
    }
    cout << "\n=========================\n";
}

// ===========================================================
// PROGRAM UTAMA
// ===========================================================
int main() {
    int pilihan, data;

    do {
        cout << "\n========== MENU DOUBLE STACK ==========" << endl;
        cout << "1. PUSH1 (Isi Stack1)" << endl;
        cout << "2. POP1  (Hapus isi Stack1)" << endl;
        cout << "3. PUSH2 (Isi Stack2)" << endl;
        cout << "4. POP2  (Hapus isi Stack2)" << endl;
        cout << "5. Lihat isi kedua stack" << endl;
        cout << "0. Keluar" << endl;
        cout << "=======================================" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data untuk Stack1: ";
                cin >> data;
                PUSH1(data);
                break;
            case 2:
                POP1();
                break;
            case 3:
                cout << "Masukkan data untuk Stack2: ";
                cin >> data;
                PUSH2(data);
                break;
            case 4:
                POP2();
                break;
            case 5:
                tampilStack();
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

