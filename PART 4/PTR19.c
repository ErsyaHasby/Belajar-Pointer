#include <stdlib.h>
#include <stdio.h>

/* Definisi tabel integer menggunakan struct */
typedef struct
{
    int *tab; /* Pointer ke array integer dinamis */
    int N;    /* Ukuran efektif array */
} tabint;

/* Prototype fungsi */
void incTab(tabint *T);  /* Fungsi untuk menambah 1 ke setiap elemen array */
void printTab(tabint T); /* Fungsi untuk mencetak setiap elemen array */

int main()
{
    /* Kamus */
    tabint T; /* Variabel struct untuk menyimpan array dinamis */
    int i;    /* Variabel untuk iterasi */

    /* Alokasi memori untuk array dinamis dengan 3 elemen */
    T.tab = (int *)malloc(3 * sizeof(int));
    T.N = 3;

    /* Memeriksa apakah alokasi memori berhasil */
    if (T.tab == NULL)
    {
        printf("Alokasi memori gagal!\n");
        return 1;
    }

    /* Mengisi array dengan input dari pengguna */
    printf("Isi dan print tabel untuk indeks 0..2\n");
    for (i = 0; i < T.N; i++)
    {
        printf("Input tabel ke-[%d] = ", i);
        scanf("%d", &(T.tab[i]));
    }

    /* Mencetak array sebelum diubah */
    printTab(T);

    /* Menambah setiap elemen array dengan 1 */
    incTab(&T);

    /* Mencetak array setelah diubah */
    printTab(T);

    /* Dealokasi memori setelah selesai digunakan */
    free(T.tab);

    return 0;
}

/* Fungsi untuk menambah setiap elemen array dengan 1 */
void incTab(tabint *T)
{
    int i;
    for (i = 0; i < T->N; i++)
    {
        T->tab[i] = T->tab[i] + 1;
    }
}

/* Fungsi untuk mencetak setiap elemen array */
void printTab(tabint T)
{
    int i;
    for (i = 0; i < T.N; i++)
    {
        printf("T[%d] = %d\n", i, T.tab[i]);
    }
}