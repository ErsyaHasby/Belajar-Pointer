#include <stdlib.h>
#include <stdio.h> // Tambahkan pustaka untuk printf dan scanf

#define STRING char * // Mendefinisikan STRING sebagai alias untuk char pointer

int main()
{
    /* Kamus */
    // Definisi array statis yang elemennya string, sekaligus mengisi
    static STRING s[3] = {"the", "time", "is"};

    // Definisi array dinamis yang elemennya string
    STRING(*TabStr);
    int i;

    /* Program */
    // Mencetak isi array statis s
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", s[i]);
    }

    // Alokasi memori untuk TabStr sebanyak 3 elemen
    TabStr = (STRING *)malloc(3 * sizeof(STRING));

    // Memeriksa apakah alokasi berhasil
    if (TabStr == NULL)
    {
        printf("Alokasi memori gagal\n");
        return 1; // Keluar program jika alokasi gagal
    }

    // Loop untuk menginput string dan mengalokasikan memori untuk masing-masing string
    for (i = 0; i < 3; i++)
    {
        // Alokasi memori untuk setiap elemen string dalam array
        *(TabStr + i) = (STRING)malloc(5 * sizeof(char));

        // Memeriksa apakah alokasi berhasil
        if (*(TabStr + i) == NULL)
        {
            printf("Alokasi memori untuk string gagal\n");
            return 1;
        }

        // Input string dari pengguna, maksimum 5 karakter
        printf("\nInput Str[%d], maksimum 5 karakter: ", i);
        scanf("%5s", *(TabStr + i));

        // Menampilkan string yang baru saja diinput
        printf("\nNilai Str[%d]: %5s\n", i, *(TabStr + i));
    }

    // Dealokasi memori yang sudah digunakan
    for (i = 0; i < 3; i++)
    {
        free(*(TabStr + i)); // Menghapus masing-masing string
    }
    free(TabStr); // Menghapus array TabStr

    return 0;
}

/*
Pemahaman Program:
Program ini mendemonstrasikan penggunaan array statis dan dinamis di bahasa C.
1. Array statis `s` berisi 3 string yang langsung diinisialisasi.
2. Array dinamis `TabStr` dialokasikan menggunakan `malloc`, kemudian setiap elemen juga dialokasikan untuk menyimpan string.
3. Program menerima input string dari pengguna, maksimal 5 karakter.
4. String yang diterima disimpan di array dinamis dan ditampilkan kembali.
5. Setelah selesai, memori yang dialokasikan dibebaskan menggunakan `free` untuk mencegah kebocoran memori.
*/
