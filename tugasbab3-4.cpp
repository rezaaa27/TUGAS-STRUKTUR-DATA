#include <stdio.h>

struct Buku {
    int no_akses;
    char penulis[50];
    char judul[50];
    int diterbitkan; // 1 = sudah diterbitkan, 0 = belum
};

int main() {
    struct Buku buku;

    printf("Masukkan nomor akses buku: ");
    scanf("%d", &buku.no_akses);
    printf("Masukkan nama penulis: ");
    scanf("%s", buku.penulis);
    printf("Masukkan judul buku: ");
    scanf("%s", buku.judul);
    printf("Apakah buku sudah diterbitkan? (1=Ya, 0=Tidak): ");
    scanf("%d", &buku.diterbitkan);

    printf("\n=== Informasi Buku ===\n");
    printf("Nomor Akses   : %d\n", buku.no_akses);
    printf("Penulis       : %s\n", buku.penulis);
    printf("Judul Buku    : %s\n", buku.judul);
    printf("Status        : %s\n", buku.diterbitkan ? "Diterbitkan" : "Belum Diterbitkan");

    return 0;
}

