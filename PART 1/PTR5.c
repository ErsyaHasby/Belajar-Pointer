#include <stdlib.h>
#include <stdio.h>

int main()
{
    /* Kamus Data (deklarasi dan inisialisasi variabel) */
    int i = 5, j; // Deklarasi variabel integer i dengan nilai awal 5 dan j tanpa inisialisasi
    char c = 'X'; // Deklarasi variabel karakter c dengan nilai 'X'

    // Alokasi memori secara dinamis untuk variabel pointer
    int *Ptri = (int *)malloc(4);               // Alokasi memori sebesar 4 byte untuk integer
    int *Ptrj = (int *)malloc(sizeof(int));     // Alokasi memori untuk satu integer
    float *fx = (float *)malloc(sizeof(float)); // Alokasi memori untuk satu float

    int A[5];       // Deklarasi array integer dengan 5 elemen
    float f = 7.23; // Deklarasi variabel float dengan nilai 7.23

    /* Program */
    *Ptri = 8; // Menyimpan nilai 8 ke alamat yang ditunjuk oleh Ptri
    *Ptrj = 0; // Menyimpan nilai 0 ke alamat yang ditunjuk oleh Ptrj
    *fx = 3;   // Menyimpan nilai 3 ke alamat yang ditunjuk oleh fx

    // Menampilkan alamat dan nilai dari variabel
    printf("Alamat i = %x \n", &i);
    printf("Nilai i = %d \n", i);
    printf("Ukuran int = %d byte\n\n", sizeof(int));

    printf("Alamat j = %x \n", &j);
    printf("Nilai j = %d \n\n", j);

    printf("Alamat c = %x \n", &c);
    printf("Nilai c = %c \n", c);
    printf("Ukuran char = %d byte\n\n", sizeof(char));

    // Menampilkan informasi tentang pointer Ptri
    printf("Alamat Ptri = %x \n", &Ptri);
    printf("Isi var Ptri = %x \n", Ptri);
    printf("Nilai yang ditunjuk oleh Ptri = %d \n", *Ptri);
    printf("Ukuran pointer int = %d byte\n\n", sizeof(int *));

    // Menampilkan informasi tentang pointer Ptrj
    printf("Alamat Ptrj = %x \n", &Ptrj);
    printf("Isi var Ptrj = %x \n", Ptrj);
    printf("Nilai yang ditunjuk oleh Ptrj = %d \n\n", *Ptrj);

    Ptrj = Ptri; // Mengubah Ptrj untuk menunjuk ke alamat yang sama dengan Ptri
    printf("Isi var Ptrj sekarang = %x \n", Ptrj);
    printf("Nilai yang ditunjuk oleh Ptrj sekarang = %d \n\n", *Ptrj);

    // Menampilkan informasi tentang array A
    printf("Alamat A = %x \n", &A);
    printf("Isi var A = %x \n", A[0]);
    printf("Ukuran array A = %d byte\n\n", sizeof(A));

    // Menampilkan informasi tentang variabel float f
    printf("Alamat f = %x \n", &f);
    printf("Nilai f = %.2f \n", f);
    printf("Ukuran float = %d byte\n\n", sizeof(float));

    return 0;
}

/*
1. Program ini mendeklarasikan beberapa variabel bertipe int, char, float, dan array.
2. Program menggunakan malloc() untuk mengalokasikan memori secara dinamis bagi variabel pointer.
3. Pointer digunakan untuk menyimpan alamat variabel dan memodifikasi nilai yang disimpan pada alamat tersebut.
4. Program menampilkan alamat memori, nilai variabel, dan ukuran berbagai tipe data.
5. Pointer Ptrj diarahkan ke Ptri, sehingga menunjuk ke alamat yang sama.
6. Program menunjukkan bagaimana memori dialokasikan dan bagaimana pointer digunakan dalam bahasa C.
*/