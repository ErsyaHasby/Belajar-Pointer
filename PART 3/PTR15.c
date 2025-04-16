#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    /* Definisi array statis yang elemennya adalah string dan langsung diinisialisasi */
    static char *s[3] = {"the", "time", "is"};

    /* Definisi array dinamis yang elemennya string */
    char *(*TabStr);

    /* Deklarasi variabel untuk iterasi */
    int i;

    /* Menampilkan isi array statis "s" */
    printf("Isi array statis s:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", s[i]);
    }

    /* Alokasi memori untuk array dinamis TabStr sebanyak 3 elemen pointer ke char */
    TabStr = (char **)malloc(3 * sizeof(char *));
    if (TabStr == NULL)
    {
        printf("Alokasi memori gagal!\n");
        return 1;
    }

    /* Mengisi array dinamis dengan input pengguna */
    for (i = 0; i < 3; i++)
    {
        /* Alokasi memori untuk setiap string dalam array dengan panjang maksimum 5 karakter */
        *(TabStr + i) = (char *)malloc(5 * sizeof(char));
        if (*(TabStr + i) == NULL)
        {
            printf("Alokasi memori gagal untuk elemen %d!\n", i);
            return 1;
        }

        /* Input string maksimal 5 karakter */
        printf("\nInput Str[%d], maksimum 5 karakter: ", i);
        scanf("%5s", *(TabStr + i));

        /* Menampilkan string yang telah dimasukkan */
        printf("\nNilai Str[%d]: %s\n", i, *(TabStr + i));
    }

    /* Dealokasi memori untuk setiap string */
    for (i = 0; i < 3; i++)
    {
        free(*(TabStr + i));
    }

    /* Dealokasi memori untuk array TabStr */
    free(TabStr);

    return 0;
}

/* Pemahaman Program:
   1. Program ini mendeklarasikan dua array string: satu array statis (s) dan satu array dinamis (TabStr).
   2. Array statis langsung diinisialisasi dengan tiga kata: "the", "time", "is".
   3. Array dinamis dialokasikan dengan malloc, dan setiap elemennya juga dialokasikan untuk string berukuran maksimum 5 karakter.
   4. Program menerima input string dari pengguna dan menyimpannya ke dalam array dinamis.
   5. Setelah selesai, memori yang telah dialokasikan dibebaskan menggunakan free().
*/
