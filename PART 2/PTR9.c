#include <stdio.h>

int main()
{
    /* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
    int var_x = 273; // Deklarasi variabel integer dengan nilai 273
    int *ptr1;       // Deklarasi pointer ptr1 yang menunjuk ke integer
    int **ptr2;      // Deklarasi pointer ptr2 yang menunjuk ke pointer integer

    ptr1 = &var_x; // ptr1 menyimpan alamat memori dari var_x
    ptr2 = &ptr1;  // ptr2 menyimpan alamat memori dari ptr1

    /* Mengakses nilai var_x melalui ptr1 dan ptr2 */
    printf("Nilai var_x melalui ptr1 = %d\n", *ptr1);  // Mengambil nilai var_x menggunakan dereference ptr1
    printf("Nilai var_x melalui ptr2 = %d\n", **ptr2); // Mengambil nilai var_x dengan dereference dua kali pada ptr2

    return 0;
}

/* STUDI KASUS: */
/* Program ini menunjukkan bagaimana pointer ke pointer bekerja dalam C. */
/* ptr1 menyimpan alamat var_x, sedangkan ptr2 menyimpan alamat ptr1. */
/* Dengan dereference satu kali pada ptr1 kita mendapatkan nilai var_x, */
/* sedangkan dengan dereference dua kali pada ptr2 kita juga mendapatkan nilai var_x. */