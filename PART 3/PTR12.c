#include <stdio.h>

int N; /* Ukuran efektif array */

/* Prototype, fungsi yang diberikan sebagai parameter aktual */
void succ(int *i); /* Fungsi suksesor: menambah 1 ke nilai */
void pred(int *i); /* Fungsi predesesor: mengurangi 1 dari nilai */

/* Prosedur dengan parameter berupa pointer ke fungsi */
void geser(int *TT, void (*f)(int *));

/* Program Utama */
int main()
{
    /* Kamus Lokal */
    int MyTab[10]; // Array dengan 10 elemen
    int i;

    /* Inisialisasi array */
    N = 10;
    for (i = 0; i < N; i++)
    {
        MyTab[i] = i; // Mengisi array dengan nilai 0 sampai 9
    }

    /* Menampilkan isi array sebelum pemanggilan fungsi */
    printf("Isi tabel dalam main sebelum pemanggilan: \n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", MyTab[i]);
    }
    printf("\n");

    /* Memanggil fungsi geser dengan parameter fungsi succ (penambahan) */
    printf("Geser dengan succ:\n");
    geser(MyTab, succ);

    /* Menampilkan array setelah pemanggilan succ */
    printf("Dalam main setelah aplikasi succ: \n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", MyTab[i]);
    }
    printf("\n");

    /* Memanggil fungsi geser dengan parameter fungsi pred (pengurangan) */
    printf("Geser dengan pred:\n");
    geser(MyTab, pred);

    /* Menampilkan array setelah pemanggilan pred */
    printf("Dalam main setelah aplikasi pred: \n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", MyTab[i]);
    }
    printf("\n");

    return 0;
}

/* Body Function */

/* Fungsi suksesor: menambah 1 ke nilai yang ditunjuk pointer */
void succ(int *i)
{
    *i = *i + 1;
}

/* Fungsi predesesor: mengurangi 1 dari nilai yang ditunjuk pointer */
void pred(int *i)
{
    *i = *i - 1;
}

/* Fungsi geser: menerima array dan fungsi sebagai parameter */
void geser(int *TT, void (*f)(int *))
{
    int i;

    printf("Dalam fungsi geser:\n");
    for (i = 0; i < N; i++)
    {
        f(&TT[i]); // Memanggil fungsi succ atau pred pada tiap elemen array
        printf("%d ", TT[i]);
    }
    printf("\n");
}
