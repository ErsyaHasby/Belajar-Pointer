#include <stdio.h>
#include <stdlib.h>

/* Kamus Global */
int N; /* ukuran efektif */

enum MyType
{
    bulat,
    karakter
};

/* Prototype, fungsi yang diberikan sebagai parameter aktual */
void succI(int *i);  /* suksessor, berupa procedure by ref */
void predI(int *i);  /* predesessor */
void succC(char *c); /* suksessor, berupa procedure by ref */
void predC(char *c); /* predesessor */

/* print tabel yang belum ketahuan typenya */
void printtab(void *T, enum MyType Ty);

/* Prosedur dengan parameter sebuah fungsi */
void geser(void *TT, void (*f)(void *), enum MyType Ty);

/* Program Utama */
int main()
{
    /* kamus lokal */
    int *MyTabInt;
    char *MyTabC;
    int i;

    /* program */
    N = 10;
    MyTabInt = (int *)malloc(N * sizeof(int));
    MyTabC = (char *)malloc(N * sizeof(char));

    for (i = 0; i < N; i++)
    {
        MyTabInt[i] = i;
        MyTabC[i] = 'Z';
    }

    printf("Isi tabel dalam main sebelum pemanggilan : \n");
    printf("    Tabel integer \n");
    printtab((void *)MyTabInt, bulat);
    printf("    Tabel karakter \n");
    printtab((void *)MyTabC, karakter);

    printf("\n");

    /* Pakai geser dengan parameter succ */
    printf("Geser dengan succ \n");
    geser((void *)MyTabInt, (void (*)(void *))succI, bulat);
    geser((void *)MyTabC, (void (*)(void *))succC, karakter);

    printf("Dalam main setelah aplikasi succ:\n");
    printf("    Tabel integer \n");
    printtab((void *)MyTabInt, bulat);
    printf("    Tabel karakter \n");
    printtab((void *)MyTabC, karakter);

    printf("\n");

    /* Pakai geser dengan parameter pred */
    printf("Geser dengan pred \n");
    geser((void *)MyTabInt, (void (*)(void *))predI, bulat);
    geser((void *)MyTabC, (void (*)(void *))predC, karakter);

    printf("Dalam main setelah aplikasi pred:\n");
    printf("    Tabel integer \n");
    printtab((void *)MyTabInt, bulat);
    printf("    Tabel karakter \n");
    printtab((void *)MyTabC, karakter);

    printf("\n");

    free(MyTabInt);
    free(MyTabC);

    return 0;
}

/* Body Function */
void succI(int *i)
{
    *i = *i + 1;
}

void predI(int *i)
{
    *i = *i - 1;
}

void succC(char *c)
{
    *c = *c + 1;
}

void predC(char *c)
{
    *c = *c - 1;
}

void geser(void *TT, void (*f)(void *), enum MyType Ty)
{
    int i;
    printf("Dalam fungsi geser:\n");
    for (i = 0; i < N; i++)
    {
        if (Ty == bulat)
        {
            f(&((int *)TT)[i]);
            printf("%d ", ((int *)TT)[i]);
        }
        else
        {
            f(&((char *)TT)[i]);
            printf("%c ", ((char *)TT)[i]);
        }
    }
    printf("\n");
}

void printtab(void *T, enum MyType Ty)
{
    int i;
    for (i = 0; i < N; i++)
    {
        switch (Ty)
        {
        case bulat:
            printf("%d ", ((int *)T)[i]);
            break;
        case karakter:
            printf("%c ", ((char *)T)[i]);
            break;
        }
    }
    printf("\n");
}