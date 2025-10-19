#include <stdio.h>
#include <string.h>

struct Buku {
    int no_akses;
    char penulis[50];
    char judul[50];
    int jumlah;
    int diterbitkan; // 1 = sudah diterbitkan, 0 = belum
};

int main() {
    struct Buku buku[100];
    int n = 0, pilihan, i;
    char cari[50];

    do {
        printf("\n=== MENU PERPUSTAKAAN ===\n");
        printf("1. Tampilkan informasi semua buku\n");
        printf("2. Tambahkan buku baru\n");
        printf("3. Tampilkan semua buku dari penulis tertentu\n");
        printf("4. Tampilkan jumlah buku dengan judul tertentu\n");
        printf("5. Tampilkan jumlah total buku di perpustakaan\n");
        printf("6. Terbitkan buku (kurangi jumlah)\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
        case 1:
            if (n == 0) {
                printf("Belum ada buku.\n");
            } else {
                for (i = 0; i < n; i++) {
                    printf("\nBuku #%d\n", buku[i].no_akses);
                    printf("Penulis      : %s\n", buku[i].penulis);
                    printf("Judul        : %s\n", buku[i].judul);
                    printf("Jumlah       : %d\n", buku[i].jumlah);
                    printf("Diterbitkan  : %s\n", buku[i].diterbitkan ? "Ya" : "Tidak");
                }
            }
            break;

        case 2:
            buku[n].no_akses = n + 1;
            printf("Nama Penulis : ");
            scanf("%s", buku[n].penulis);
            printf("Judul Buku   : ");
            scanf("%s", buku[n].judul);
            printf("Jumlah Buku  : ");
            scanf("%d", &buku[n].jumlah);
            buku[n].diterbitkan = 0;
            n++;
            printf("Buku berhasil ditambahkan!\n");
            break;

        case 3:
            printf("Masukkan nama penulis: ");
            scanf("%s", cari);
            for (i = 0; i < n; i++) {
                if (strcmp(buku[i].penulis, cari) == 0) {
                    printf("\nJudul: %s | Jumlah: %d | Diterbitkan: %s\n",
                        buku[i].judul, buku[i].jumlah,
                        buku[i].diterbitkan ? "Ya" : "Tidak");
                }
            }
            break;

        case 4: {
            printf("Masukkan judul buku: ");
            scanf("%s", cari);
            int total = 0;
            for (i = 0; i < n; i++) {
                if (strcmp(buku[i].judul, cari) == 0)
                    total += buku[i].jumlah;
            }
            printf("Jumlah buku dengan judul '%s': %d\n", cari, total);
            break;
        }

        case 5: {
            int total_semua = 0;
            for (i = 0; i < n; i++)
                total_semua += buku[i].jumlah;
            printf("Total semua buku di perpustakaan: %d\n", total_semua);
            break;
        }

        case 6: {
            printf("Masukkan nomor akses buku yang akan diterbitkan: ");
            int no;
            scanf("%d", &no);
            if (no > 0 && no <= n) {
                if (buku[no - 1].jumlah > 0) {
                    buku[no - 1].jumlah--;
                    buku[no - 1].diterbitkan = 1;
                    printf("Buku berhasil diterbitkan!\n");
                } else {
                    printf("Stok buku habis!\n");
                }
            } else {
                printf("Nomor akses tidak ditemukan!\n");
            }
            break;
        }

        case 0:
            printf("Keluar dari program...\n");
            break;

        default:
            printf("Pilihan tidak valid!\n");
        }

    } while (pilihan != 0);

    return 0;
}

