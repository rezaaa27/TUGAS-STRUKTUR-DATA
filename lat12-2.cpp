#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float nilai;
    Mahasiswa* next;
};

// pointer head (awal linked list)
Mahasiswa* head = nullptr;

// =========================================================
// a. Fungsi untuk menambah data baru (urut berdasarkan NILAI naik)
void tambahData() {
    Mahasiswa* baru = new Mahasiswa;
    cout << "\nMasukkan NIM   : ";
    getline(cin >> ws, baru->nim);
    cout << "Masukkan Nama  : ";
    getline(cin, baru->nama);
    cout << "Masukkan Nilai : ";
    cin >> baru->nilai;
    baru->next = nullptr;

    // Jika list kosong atau data baru punya nilai lebih kecil dari head
    if (head == nullptr || baru->nilai < head->nilai) {
        baru->next = head;
        head = baru;
    } else {
        Mahasiswa* bantu = head;
        while (bantu->next != nullptr && bantu->next->nilai < baru->nilai) {
            bantu = bantu->next;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
    cout << ">> Data berhasil ditambahkan (tersusun naik berdasarkan nilai).\n";
}

// =========================================================
// b. Fungsi menampilkan data dengan NILAI = 90
void tampilNilai90() {
    if (head == nullptr) {
        cout << "\nData kosong!\n";
        return;
    }
    bool found = false;
    Mahasiswa* bantu = head;
    cout << "\n===== Data Mahasiswa dengan NILAI = 90 =====\n";
    while (bantu != nullptr) {
        if (bantu->nilai == 90) {
            cout << "NIM   : " << bantu->nim << endl;
            cout << "Nama  : " << bantu->nama << endl;
            cout << "Nilai : " << bantu->nilai << endl;
            cout << "--------------------------------\n";
            found = true;
        }
        bantu = bantu->next;
    }
    if (!found)
        cout << "Tidak ada mahasiswa dengan nilai 90.\n";
}

// =========================================================
// c. Fungsi menampilkan seluruh data
void tampilSemua() {
    if (head == nullptr) {
        cout << "\nData kosong!\n";
        return;
    }
    cout << "\n===== DAFTAR SELURUH DATA MAHASISWA =====\n";
    Mahasiswa* bantu = head;
    int i = 1;
    while (bantu != nullptr) {
        cout << i++ << ". NIM   : " << bantu->nim << endl;
        cout << "   Nama  : " << bantu->nama << endl;
        cout << "   Nilai : " << bantu->nilai << endl;
        cout << "--------------------------------\n";
        bantu = bantu->next;
    }
}

// =========================================================
// d. Fungsi menghapus data dengan NIM tertentu
void hapusData() {
    if (head == nullptr) {
        cout << "\nData kosong!\n";
        return;
    }
    string target;
    cout << "\nMasukkan NIM yang ingin dihapus: ";
    getline(cin >> ws, target);

    Mahasiswa* bantu = head;
    Mahasiswa* hapus = nullptr;

    // Jika data di awal
    if (head->nim == target) {
        hapus = head;
        head = head->next;
        delete hapus;
        cout << ">> Data dengan NIM " << target << " berhasil dihapus.\n";
        return;
    }

    // Cari data di tengah/akhir
    while (bantu->next != nullptr && bantu->next->nim != target) {
        bantu = bantu->next;
    }

    if (bantu->next == nullptr) {
        cout << ">> Data dengan NIM " << target << " tidak ditemukan.\n";
    } else {
        hapus = bantu->next;
        bantu->next = hapus->next;
        delete hapus;
        cout << ">> Data dengan NIM " << target << " berhasil dihapus.\n";
    }
}

// =========================================================
// e. Fungsi menghitung nilai rata-rata kelas
void hitungRataRata() {
    if (head == nullptr) {
        cout << "\nData kosong!\n";
        return;
    }
    float total = 0;
    int count = 0;
    Mahasiswa* bantu = head;
    while (bantu != nullptr) {
        total += bantu->nilai;
        count++;
        bantu = bantu->next;
    }
    cout << "\nRata-rata nilai kelas: " << total / count << endl;
}

// =========================================================
// Menu utama
int main() {
    int pilihan;
    do {
        cout << "\n===== MENU LINKED LIST NILAI TERURUT NAIK =====\n";
        cout << "1. Tambah Data (Insert)\n";
        cout << "2. Tampilkan Data dengan Nilai = 90\n";
        cout << "3. Tampilkan Seluruh Data\n";
        cout << "4. Hapus Data dengan NIM = 2007140022\n";
        cout << "5. Hitung Rata-rata Nilai Kelas\n";
        cout << "6. Keluar\n";
        cout << "Pilih menu (1-6): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: tambahData(); break;
            case 2: tampilNilai90(); break;
            case 3: tampilSemua(); break;
            case 4: hapusData(); break;
            case 5: hitungRataRata(); break;
            case 6: cout << "Program selesai.\n"; break;
            default: cout << "Pilihan tidak valid!\n"; break;
        }
    } while (pilihan != 6);

    return 0;
}

