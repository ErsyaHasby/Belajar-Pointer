#include <stdlib.h>
#include <stdio.h>
/*Definisi akses komponen type, standard kuliah Algoritma dan pemrograman*/
#define info(P) (P)->info
#define next(P) (P)->next
#define Nil NULL
/* Definisi TYPE global (sebenarnya untuk soal ini tidak perlu global) */
/* Element list linier */
typedef char infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist
{
    infotype info;
    address next;
} ElmtList;
/* Program Utama */
int main()
{
    /* kamus */
    address First, X, Y;
    address P, Q;
    /* program */
    /* Create list kosong */
    First = Nil;
    /* Alokasi, insert as first elemen */
    P = (address)malloc(sizeof(ElmtList));
    info(P) = 'A';
    next(P) = Nil;
    First = P;
    /* Alokasi, insert as first elemen */
    Q = (address)malloc(sizeof(ElmtList));
    info(Q) = 'B';
    next(Q) = Nil;
    next(Q) = First;
    First = Q;
    /* Alokasi, insert as first elemen */
    P = (address)malloc(sizeof(ElmtList));
    info(P) = 'C';
    next(P) = Nil;
    next(P) = First;
    First = P;

    printf("\n");
    printf("%c \n", info(next(next(First))));
    printf("%c \n", info(next(First)));
    printf("%c \n", info(First));

    // update nilai//
    // printf("%c \n",//
    info(next(First)) = 'T';
    // printf("%c \n",//
    info(First) = 'J';
    // printf("%c \n",//
    info(next(next(First))) = 'K';

    printf("\n");
    printf("%c \n", info(First));
    printf("%c \n", info(next(First)));
    printf("%c \n", info(next(next(First))));

    // delete//
    X = next(First);
    next(First) = next(X);
    next(X) = NULL;
    free(X);

    printf("\n");
    printf("%c \n", info(First));
    printf("%c \n", info(next(First)));
    printf("%c \n", info(next(next(First))));

    X = First;
    First = next(X);
    next(X) = NULL;
    free(X);

    printf("\n");
    printf("%c \n", info(First));
    printf("%c \n", info(next(First)));
    printf("%c \n", info(next(next(First))));

    return 0;
}