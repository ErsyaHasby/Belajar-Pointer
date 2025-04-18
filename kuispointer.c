#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus Data (Deklarasi dan Inisialisasi Variabel) */
    int *tab; // Deklarasi pointer untuk array dinamis
    int N, i; // N = ukuran array, i = indeks array
    char *nama[i];
    char *nilai[i];

    /* Program */
    printf("Jumlah siswa kelas 1C = ");
    scanf("%d", &N); // Meminta input ukuran array dari pengguna

    printf("\nNama: ", i);
    scanf("%5s", *(nama + i));

    printf("\nNilai: ", i);
    scanf("%5s", *(nilai + i));

    printf("Alokasi setelah mengetahui ukuran array \n");
    // Alokasi memori untuk array dinamis dengan ukuran (N+1) elemen
    tab = (int *)malloc((N + 1) * sizeof(int));

    // Mengecek apakah alokasi memori berhasil
    if (tab != NULL)
    {
        // Mengisi dan menampilkan isi array
        for (i = 0; i <= N; i++)
        {
            // tab[i] = i * 1;                             // Memberikan nilai ke elemen array (contoh: kelipatan 10)
            printf("i=%d tab[i]=%d \n", i, *(tab + i)); // Menampilkan elemen array
        }

        printf("Akhir program \n");

        /* Dealokasi Memori */
        free(tab); // Mengembalikan memori yang telah dialokasikan
        return 0;
    }
    else
    {
        // Jika alokasi memori gagal
        printf("Alokasi gagal ... \n");
        return 1;
    }

    return 0;
}