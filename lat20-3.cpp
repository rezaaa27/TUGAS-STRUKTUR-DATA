#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int langkah = 0;

    while (low <= high) {
        langkah++;
        int mid = (low + high) / 2;

        cout << "Langkah " << langkah
             << ": cek indeks " << mid
             << " (nilai " << arr[mid] << ")" << endl;

        if (arr[mid] == key) {
            cout << "Data ditemukan\n";
            return langkah;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Data tidak ditemukan\n";
    return langkah;
}

int main() {
    int data[15] = {2, 5, 8, 12, 16, 23, 28, 35, 42, 47, 53, 59, 63, 70, 85};
    int cari;

    cout << "Data: ";
    for (int i = 0; i < 15; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    cout << "Masukkan angka yang dicari: ";
    cin >> cari;

    int totalLangkah = binarySearch(data, 15, cari);

    cout << "Jumlah langkah pencarian: "
         << totalLangkah << endl;

    return 0;
}

