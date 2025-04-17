#include <stdio.h>

/* Definisi tabel integer menggunakan struct */
typedef struct
{
    int tab[10]; // Array dengan kapasitas maksimal 10 elemen
    int N;       // Ukuran efektif array
} tabint;

/* Prototype fungsi */
void incTab(tabint *T);  // Fungsi untuk menambah nilai setiap elemen array
void printTab(tabint T); // Fungsi untuk mencetak isi array

int main()
{
    /* Kamus */
    tabint T; // Deklarasi variabel bertipe tabint
    int i;    // Variabel untuk iterasi

    /* Program */
    T.N = 3; // Menentukan jumlah elemen efektif array

    printf("Isi dan print tabel untuk indeks 1..3 \n");

    /* Mengisi array dengan input pengguna */
    for (i = 0; i < T.N; i++)
    {
        printf("Input tabel ke -[%d] = ", i);
        scanf("%d", &(T.tab[i]));
    }

    /* Mencetak array sebelum increment */
    printf("\nIsi tabel sebelum increment:\n");
    printTab(T);

    /* Menambah setiap elemen array dengan 1 menggunakan parameter by reference */
    incTab(&T);

    /* Mencetak array setelah increment */
    printf("\nIsi tabel setelah increment:\n");
    printTab(T);

    return 0;
}

/* Fungsi untuk menambah setiap elemen array dengan 1 */
void incTab(tabint *T)
{
    /* Kamus lokal */
    int i;

    /* Menambah nilai setiap elemen array dengan 1 */
    for (i = 0; i < (*T).N; i++)
    {
        (*T).tab[i] = (*T).tab[i] + 1;
    }
}

/* Fungsi untuk mencetak setiap elemen array */
void printTab(tabint T)
{
    /* Kamus lokal */
    int i;

    /* Traversal untuk mencetak isi array */
    for (i = 0; i < T.N; i++)
    {
        printf("T[%d] = %d \n", i, T.tab[i]);
    }
}
