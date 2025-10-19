#include <stdio.h>

struct Mahasiswa {
    int no_urut;
    char nama[50];
    int usia;
    float nilai;
};

int main() {
    struct Mahasiswa mhs;

    printf("Masukkan No urut: ");
    scanf("%d", &mhs.no_urut);
    printf("Masukkan Nama: ");
    scanf("%s", mhs.nama);
    printf("Masukkan Usia: ");
    scanf("%d", &mhs.usia);
    printf("Masukkan Nilai: ");
    scanf("%f", &mhs.nilai);

    printf("\n=== Data Mahasiswa ===\n");
    printf("No Urut : %d\n", mhs.no_urut);
    printf("Nama    : %s\n", mhs.nama);
    printf("Usia    : %d\n", mhs.usia);
    printf("Nilai   : %.2f\n", mhs.nilai);

    return 0;
}

