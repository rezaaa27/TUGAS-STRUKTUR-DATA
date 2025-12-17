#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string gender;
    float nilai;
    Mahasiswa* next;
};

// Fungsi Push (INSERT DATA)
void push(Mahasiswa** top) {
    Mahasiswa* baru = new Mahasiswa;
    cout << "Masukkan Nama Mahasiswa : ";
    getline(cin >> ws, baru->nama);
    cout << "Masukkan NIM Mahasiswa  : ";
    getline(cin, baru->nim);
    cout << "Masukkan Gender         : ";
    getline(cin, baru->gender);
    cout << "Masukkan Nilai Struktur Data : ";
    cin >> baru->nilai;
    baru->next = *top; // sambungkan ke node sebelumnya
    *top = baru;       // update pointer top
    cout << "\n>> Data berhasil dimasukkan ke Stack!\n";
}

// Fungsi Pop (HAPUS DATA)
void pop(Mahasiswa** top) {
    if (*top == nullptr) {
        cout << "\nStack kosong! Tidak ada data yang bisa dihapus.\n";
        return;
    }
    Mahasiswa* hapus = *top;
    *top = (*top)->next;
    cout << "\n>> Data '" << hapus->nama << "' berhasil dihapus dari Stack.\n";
    delete hapus;
}

// Fungsi Cetak (CETAK DATA)
void cetak(Mahasiswa* top) {
    if (top == nullptr) {
        cout << "\nStack kosong! Belum ada data.\n";
        return;
    }
    cout << "\n===== DAFTAR DATA MAHASISWA (TOP -> BOTTOM) =====\n";
    int i = 1;
    Mahasiswa* temp = top;
    while (temp != nullptr) {
        cout << i++ << ". Nama   : " << temp->nama << endl;
        cout << "   NIM    : " << temp->nim << endl;
        cout << "   Gender : " << temp->gender << endl;
        cout << "   Nilai  : " << temp->nilai << endl;
        cout << "--------------------------------------\n";
        temp = temp->next;
    }
}

// Fungsi utama (menu)
int main() {
    Mahasiswa* top = nullptr;
    int pilihan;
    do {
        cout << "\n===== MENU STACK (Linked List TANPA Head) =====\n";
        cout << "1. INSERT DATA\n";
        cout << "2. HAPUS DATA\n";
        cout << "3. CETAK DATA\n";
        cout << "4. EXIT\n";
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: push(&top); break;
            case 2: pop(&top); break;
            case 3: cetak(top); break;
            case 4: cout << "Program selesai.\n"; break;
            default: cout << "Pilihan tidak valid!\n"; break;
        }
    } while (pilihan != 4);

    return 0;
}

