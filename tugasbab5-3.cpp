#include <iostream>
using namespace std;

#define MAX 10  // kapasitas array utama

int Stack[MAX];
int TOP1 = -1;   // posisi teratas stack1
int TOP2 = MAX;  // posisi teratas stack2

// ===========================================================
// Fungsi untuk menambah data ke Stack1 (kiri)
// ===========================================================
void PUSH1(int data) {
    if (TOP1 + 1 == TOP2) {
        cout << "? Stack PENUH, tidak bisa menambah data lagi!\n";
        return;
    }
    TOP1++;
    Stack[TOP1] = data;
    cout << "? Data " << data << " berhasil dimasukkan ke Stack1 di posisi " << TOP1 << ".\n";
}

// ===========================================================
// Fungsi untuk menambah data ke Stack2 (kanan)
// ===========================================================
void PUSH2(int data) {
    if (TOP2 - 1 == TOP1) {
        cout << "? Stack PENUH, tidak bisa menambah data lagi!\n";
        return;
    }
    TOP2--;
    Stack[TOP2] = data;
    cout << "? Data " << data << " berhasil dimasukkan ke Stack2 di posisi " << TOP2 << ".\n";
}

// ===========================================================
// Fungsi untuk memeriksa kondisi Double Stack
// ===========================================================
void cekKondisi() {
    cout << "\n=== CEK KONDISI DOUBLE STACK ===\n";

    // a. Kondisi PENUH
    if (TOP1 + 1 == TOP2) {
        cout << "a. PENUH  : Ya ? (Stack1 dan Stack2 tidak bisa diisi lagi)\n";
    } else {
        cout << "a. PENUH  : Tidak ?\n";
    }

    // b. Bisa diisi
    if (TOP1 + 1 < TOP2) {
        cout << "b. BISA DIISI : Ya ? (Masih ada ruang di antara Stack1 dan Stack2)\n";
    } else {
        cout << "b. BISA DIISI : Tidak ?\n";
    }

    // c. Kosong
    if (TOP1 == -1 && TOP2 == MAX) {
        cout << "c. KOSONG : Ya ? (Kedua Stack masih kosong)\n";
    } else {
        cout << "c. KOSONG : Tidak ? (Salah satu atau keduanya sudah berisi)\n";
    }

    cout << "=================================\n";
}

// ===========================================================
// Fungsi menampilkan isi Stack1 dan Stack2
// ===========================================================
void tampilStack() {
    cout << "\n--- KONDISI SAAT INI ---\n";

    cout << "Stack1: ";
    if (TOP1 == -1) cout << "(kosong)";
    else for (int i = 0; i <= TOP1; i++) cout << Stack[i] << " ";

    cout << "\nStack2: ";
    if (TOP2 == MAX) cout << "(kosong)";
    else for (int i = MAX - 1; i >= TOP2; i--) cout << Stack[i] << " ";

    cout << "\n--------------------------\n";
}

// ===========================================================
// Program Utama
// ===========================================================
int main() {
    int pilihan, data;

    do {
        cout << "\n========== MENU KONDISI DOUBLE STACK ==========" << endl;
        cout << "1. PUSH1 (Isi Stack1)" << endl;
        cout << "2. PUSH2 (Isi Stack2)" << endl;
        cout << "3. Cek Kondisi Double Stack" << endl;
        cout << "4. Lihat Isi Kedua Stack" << endl;
        cout << "0. Keluar" << endl;
        cout << "===============================================" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data untuk Stack1: ";
                cin >> data;
                PUSH1(data);
                break;
            case 2:
                cout << "Masukkan data untuk Stack2: ";
                cin >> data;
                PUSH2(data);
                break;
            case 3:
                cekKondisi();
                break;
            case 4:
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

