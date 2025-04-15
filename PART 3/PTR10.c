#include <stdio.h>

/* Prototype fungsi */
void f1(void);
void f2(void);
void f3(void);
void f4(void);

/* Kamus Global */
#define true 1
#define false 0
int quit = false; // Variabel global untuk menghentikan program

int main()
{
    /* Kamus Lokal */
    /* Tabel yang elemennya adalah pointer ke fungsi */
    /* Elemen tabel ke-i mengakses fungsi ke-i */
    void (*tab[4])() = {f1, f2, f3, f4};

    /* Program */
    printf("Pointer to function :\n");

    /* Menu menggunakan do-while loop */
    do
    {
        printf("Pilih salah satu :\n");
        printf("1. Buka file hanya untuk baca\n");
        printf("2. Tutup file\n");
        printf("3. Edit file\n");
        printf("4. Quit\n");

        /* Memanggil fungsi yang sesuai pilihan menggunakan pointer ke fungsi */
        tab[getchar() - '1']();
        getchar(); // Menghapus karakter 'Enter' agar input berikutnya tidak terlewat

    } while (!quit);

    return 0;
}

/* Body Function */
void f1()
{
    printf("Ini fungsi f1: Buka file hanya untuk baca\n");
}

void f2()
{
    printf("Ini fungsi f2: Tutup file\n");
}

void f3()
{
    printf("Ini fungsi f3: Edit file\n");
}

void f4()
{
    quit = true;
    printf("Quit... Program selesai.\n");
}

/* PEMAHAMAN PROGRAM */
/* Program ini mendemonstrasikan penggunaan pointer ke fungsi dalam bentuk menu sederhana. */
/* Array "tab" berisi pointer ke fungsi, dan input pengguna menentukan fungsi mana yang dipanggil. */

/* HAL BARU YANG DIPEROLEH */
/* 1. Cara mendeklarasikan dan menggunakan array pointer ke fungsi di bahasa C. */
/* 2. Bagaimana mengakses fungsi melalui indeks array pointer. */
/* 3. Implementasi menu interaktif dengan pointer ke fungsi untuk mengurangi kode berulang. */
