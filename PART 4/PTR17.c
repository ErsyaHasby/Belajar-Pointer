#include <stdlib.h>
#include <stdio.h>

int main()
{
    /* Kamus */
    /* Definisi struktur tabel integer */
    typedef struct
    {
        int *T; // Pointer ke array integer dinamis
        int N;  // Ukuran efektif array
    } tabint;

    tabint MyTab; // Deklarasi variabel MyTab bertipe tabint
    int i;        // Variabel untuk iterasi

    /* Program */
    printf("Tentukan ukuran tabel, maks 10 = ");
    scanf("%d", &(MyTab.N)); // Input ukuran array

    // Alokasi memori untuk array dinamis dengan ukuran N
    MyTab.T = (int *)malloc(MyTab.N * sizeof(int));

    // Mengecek apakah alokasi memori berhasil
    if (MyTab.T == NULL)
    {
        printf("Alokasi memori gagal!\n");
        return 1; // Keluar program dengan kode error
    }

    // Mengisi array dengan nilai dan mencetaknya
    for (i = 0; i < MyTab.N; i++)
    {
        *(MyTab.T + i) = i; // Mengisi array dengan nilai i
        printf("i = %d MyTab.T[%d] = %d\n", i, i, *(MyTab.T + i));
    }

    // Dealokasi memori setelah selesai digunakan
    free(MyTab.T);

    return 0;
}

/* Pemahaman Program */
/*
Program ini membuat array dinamis menggunakan struct dan pointer di bahasa C.
1. Struct 'tabint' menyimpan pointer ke array integer dan ukuran array.
2. Ukuran array diminta dari pengguna dan dialokasikan dengan 'malloc'.
3. Array diisi dengan nilai indeks dan ditampilkan.
4. Memori yang dialokasikan dibebaskan dengan 'free' di akhir.
Program ini menunjukkan bagaimana mengelola array dinamis dengan struct di C.
*/
