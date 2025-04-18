#include <stdlib.h>
#include <stdio.h>
/*Definisi akses komponen type, standard kuliah Algoritma dan pemrograman*/
#define info(P) (P)->info
#define next(P) (P)->next
#define Nil NULL
/* Definisi TYPE global (sebenarnya untuk soal ini tidak perlu global) */
/* Element list linier */
typedef int infotype;
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
    address First;
    address P, Q, X;
    /* program */
    /* Create list kosong */
    First = Nil;
    /* Alokasi, insert as first elemen */
    P = (address)malloc(sizeof(ElmtList));
    info(P) = 10;
    next(P) = Nil;
    First = P;
    /* Alokasi, insert as first elemen */
    Q = (address)malloc(sizeof(ElmtList));
    info(Q) = 20;
    next(Q) = Nil;
    next(Q) = First;
    First = Q;

    X = (address)malloc(sizeof(ElmtList));
    info(X) = 25;
    next(X) = Nil;
    next(X) = First;
    First = X;

    /* Alokasi, insert as first elemen */
    P = (address)malloc(sizeof(ElmtList));
    info(P) = 30;
    next(P) = Nil;
    next(P) = First;
    First = P;
    /* Alokasi, insert as first elemen */
    X = (address)malloc(sizeof(ElmtList));
    info(X) = 40;
    next(X) = Nil;
    next(X) = First;
    First = X;

    /* Alokasi, insert as first elemen */
    X = (address)malloc(sizeof(ElmtList));
    info(X) = 0;
    next(X) = Nil;
    next(next(next(next(First)))) = X;

    printf("%d \n", info(next(next(First))));
    return 0;
}