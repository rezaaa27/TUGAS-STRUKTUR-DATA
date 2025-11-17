#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nama, gender;
    int nim;
    float nilai;

    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = NULL;
    }

    // =============================================
    // INSERT DATA (Terurut berdasarkan NIM)
    // =============================================
    void insertData(string nama, int nim, string gender, float nilai) {
        cout << "\n[ANIMASI] Memulai proses INSERT " << nim << "...\n";

        Node* baru = new Node;
        baru->nama = nama;
        baru->nim = nim;
        baru->gender = gender;
        baru->nilai = nilai;
        baru->prev = baru->next = NULL;

        // List kosong
        if (head == NULL) {
            cout << "[ANIMASI] List kosong ? Node menjadi HEAD\n";
            head = baru;
            return;
        }

        // Insert di depan jika NIM lebih kecil dari head
        if (nim < head->nim) {
            cout << "[ANIMASI] " << nim << " < HEAD (" << head->nim << ") ? Insert di depan\n";
            baru->next = head;
            head->prev = baru;
            head = baru;
            return;
        }

        // Mencari posisi penyisipan
        cout << "[ANIMASI] Mencari posisi penyisipan...\n";
        Node* current = head;

        while (current->next != NULL && nim > current->next->nim) {
            cout << "  - Bandingkan dengan " << current->next->nim << " ? lanjut\n";
            current = current->next;
        }

        cout << "[ANIMASI] Menyisipkan node " << nim << " setelah " << current->nim << "\n";

        baru->next = current->next;
        baru->prev = current;

        if (current->next != NULL)
            current->next->prev = baru;

        current->next = baru;
    }

    // =============================================
    // HAPUS DATA (berdasarkan NIM)
    // =============================================
    bool hapusData(int nim) {
        cout << "\n[ANIMASI] Memulai proses HAPUS " << nim << "...\n";

        if (head == NULL) {
            cout << "[ANIMASI] List kosong ? Tidak bisa menghapus\n";
            return false;
        }

        Node* current = head;

        // Jika node pertama
        if (current->nim == nim) {
            cout << "[ANIMASI] Data ditemukan di HEAD ? Menghapus...\n";
            head = current->next;
            if (head != NULL)
                head->prev = NULL;
            delete current;
            return true;
        }

        while (current != NULL && current->nim != nim) {
            cout << "  - Melihat node " << current->nim << " ... tidak cocok\n";
            current = current->next;
        }

        if (current == NULL) {
            cout << "[ANIMASI] Data tidak ditemukan\n";
            return false;
        }

        cout << "[ANIMASI] Data ditemukan: " << nim << " ? Menghapus\n";

        if (current->prev != NULL)
            current->prev->next = current->next;

        if (current->next != NULL)
            current->next->prev = current->prev;

        delete current;
        return true;
    }

    // =============================================
    // CETAK DATA
    // =============================================
    void cetakData() {
        cout << "\n=== DATA DALAM DOUBLY LINKED LIST ===\n";
        if (head == NULL) {
            cout << "(Kosong)\n";
            return;
        }

        Node* current = head;
        while (current != NULL) {
            cout << "NIM: " << current->nim
                 << " | NAMA: " << current->nama
                 << " | GENDER: " << current->gender
                 << " | NILAI: " << current->nilai << endl;

            current = current->next;
        }
    }
};

int main() {
    DoublyLinkedList dll;
    int pilihan;

    while (true) {
        cout << "\nLIN. DOUBLY LINKED LIST\n";
        cout << "===========================\n";
        cout << "1. INSERT DATA\n";
        cout << "2. HAPUS DATA\n";
        cout << "3. CETAK DATA\n";
        cout << "4. EXIT\n";
        cout << "Pilihan (1-4): ";
        cin >> pilihan;
        
        if (pilihan == 1) {
            string nama, gender;
            int nim;
            float nilai;

            cout << "\n=== INPUT DATA ===\n";
            cout << "Nama   : ";
            cin >> ws; getline(cin, nama);
            cout << "NIM    : "; cin >> nim;
            cout << "Gender : "; cin >> gender;
            cout << "Nilai  : "; cin >> nilai;

            dll.insertData(nama, nim, gender, nilai);
        }
        else if (pilihan == 2) {
            int nim;
            cout << "Masukkan NIM yang akan dihapus: ";
            cin >> nim;

            if (dll.hapusData(nim))
                cout << ">> Data berhasil dihapus!\n";
            else
                cout << ">> Data tidak ditemukan!\n";
        }
        else if (pilihan == 3) {
            dll.cetakData();
        }
        else if (pilihan == 4) {
            cout << "Program selesai.\n";
            break;
        }
        else {
            cout << "Pilihan tidak valid!\n";
        }
    }

    return 0;
}

