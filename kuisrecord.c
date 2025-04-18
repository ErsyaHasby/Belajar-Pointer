#include <stdio.h>
#include <stdlib.h>

// Definisi tipe record untuk data siswa
typedef struct
{
    char nama[50];
    int nilai;
} Siswa;

int main()
{
    int jumlahSiswa, i;
    Siswa *dataSiswa;

    // Input jumlah siswa
    printf("Masukkan jumlah siswa: ");
    scanf("%d", &jumlahSiswa);

    // Alokasi memori untuk array of record
    dataSiswa = (Siswa *)malloc(jumlahSiswa * sizeof(Siswa));

    // Input data siswa
    for (i = 0; i < jumlahSiswa; i++)
    {
        printf("\nData siswa ke-%d:\n", i + 1);
        printf("Nama: ");
        scanf("%s", dataSiswa[i].nama);
        printf("Nilai: ");
        scanf("%d", &dataSiswa[i].nilai);
    }

    // Menampilkan data siswa
    printf("\nDaftar Siswa:\n");
    for (i = 0; i < jumlahSiswa; i++)
    {
        printf("Siswa %d: Nama = %s, Nilai = %d\n", i + 1, dataSiswa[i].nama, dataSiswa[i].nilai);
    }

    // Dealokasi memori
    free(dataSiswa);

    return 0;
}
