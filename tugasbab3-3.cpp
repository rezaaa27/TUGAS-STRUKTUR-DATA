#include <stdio.h>

struct Mahasiswa {
    int no_urut;
    char nama[50];
    int umur;
    char alamat[100];
    float nilai;
};

int main() {
    struct Mahasiswa mhs[15];
    int i;

    printf("Masukkan data 15 mahasiswa:\n");
    for (i = 0; i < 15; i++) {
        mhs[i].no_urut = i + 1;
        printf("\nMahasiswa ke-%d\n", mhs[i].no_urut);
        printf("Nama    : ");
        scanf("%s", mhs[i].nama);
        printf("Umur    : ");
        scanf("%d", &mhs[i].umur);
        printf("Alamat  : ");
        scanf("%s", mhs[i].alamat);
        printf("Nilai   : ");
        scanf("%f", &mhs[i].nilai);
    }

    printf("\n=== Data Seluruh Mahasiswa ===\n");
    for (i = 0; i < 15; i++) {
        printf("\nMahasiswa #%d\n", mhs[i].no_urut);
        printf("Nama   : %s\n", mhs[i].nama);
        printf("Umur   : %d\n", mhs[i].umur);
        printf("Alamat : %s\n", mhs[i].alamat);
        printf("Nilai  : %.2f\n", mhs[i].nilai);
    }

    return 0;
}

