#include <stdio.h>

struct Mahasiswa {
    int no_urut;
    char nama[50];
    int umur;
};

int main() {
    struct Mahasiswa mhs[5];
    int i;

    printf("Masukkan data 5 mahasiswa:\n");
    for (i = 0; i < 5; i++) {
        mhs[i].no_urut = i + 1;
        printf("\nMahasiswa ke-%d\n", mhs[i].no_urut);
        printf("Nama  : ");
        scanf("%s", mhs[i].nama);
        printf("Umur  : ");
        scanf("%d", &mhs[i].umur);
    }

    printf("\n=== Data Mahasiswa No Urut 2 ===\n");
    printf("No Urut : %d\n", mhs[1].no_urut);
    printf("Nama    : %s\n", mhs[1].nama);
    printf("Umur    : %d\n", mhs[1].umur);

    return 0;
}

