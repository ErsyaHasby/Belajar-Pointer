#include <stdlib.h>
#include <stdio.h>

int main()
{
    /* Kamus Data (Deklarasi dan Inisialisasi Variabel) */
    int *tab; // Deklarasi pointer untuk array dinamis
    int N, i; // N = ukuran array, i = indeks array

    /* Program */
    printf("Contoh mengisi array dinamis berukuran 0..N : \n");
    printf("N = ");
    scanf("%d", &N); // Meminta input ukuran array dari pengguna

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

/* Pemahaman Program:
   Program ini membuat array dinamis menggunakan pointer dan fungsi malloc.
   1. Program meminta pengguna untuk menentukan ukuran array (N).
   2. Memori dialokasikan sesuai ukuran (N+1) menggunakan malloc.
   3. Jika alokasi berhasil, array diisi dan ditampilkan.
   4. Setelah selesai, memori dikembalikan menggunakan free.
   5. Jika alokasi gagal, program menampilkan pesan error.
*/
