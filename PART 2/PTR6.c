#include <stdio.h>

int main()
{
    /* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
    static int tgl_lahir[] = {18, 6, 1989};
    int *ptgl;
    ptgl = tgl_lahir;

    /* Menampilkan seluruh elemen array menggunakan pointer */
    printf("Seluruh elemen array tgl_lahir:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("tgl_lahir[%d] = %d\n", i, *(ptgl + i));
        printf("Alamat = %p \n", &tgl_lahir[i]);
    }

    return 0;
}

/* Tujuan Program: */
/* Program ini menggunakan pointer untuk mengakses dan menampilkan seluruh elemen array tgl_lahir. */
/* Program ini akan menampilkan seluruh elemen array tgl_lahir dengan menggunakan pointer. */