#include <stdio.h>
int main()
{
    /* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
    char *nama1 = "HENHEN HAYAM";
    char *nama2 = "FEBRI HARIYADI";
    char *namaX;
    puts("Nama semula : ");
    printf("Nama 1 --> %s\n", nama1);
    printf("Nama 2 --> %s\n", nama2);
    /* Penukaran string yang ditunjuk oleh pointer nama1 dan nama2 */
    namaX = nama1;
    nama1 = nama2;
    nama2 = namaX;
    puts("Nama sekarang : ");
    printf("Nama 1 --> %s\n", nama1);
    printf("Nama 2 --> %s\n", nama2);
    return 0;
}
