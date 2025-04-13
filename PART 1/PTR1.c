#include <stdio.h> // Mengimpor library stdio.h untuk fungsi input-output (printf)

int main()
{
    int x, y; // Deklarasi dua variabel bertipe integer
    int *px;  // Deklarasi pointer px yang menunjuk ke variabel bertipe integer

    x = 87; // Memberikan nilai 87 ke variabel x

    px = &x; // Menyimpan alamat x ke dalam pointer px
    y = *px; // Mengambil nilai yang ditunjuk oleh px (nilai x) dan menyimpannya ke y

    // Menampilkan alamat memori dari x
    printf("Alamat x = %p\n", &x);

    // Menampilkan isi variabel x
    printf("Isi px   = %d\n", x);

    // Menampilkan nilai yang ditunjuk oleh pointer px (nilai x)
    printf("Nilai yang ditunjuk oleh px = %d\n", *px);

    // Menampilkan nilai variabel y
    printf("Nilai y  = %d\n", y);

    // Menampilkan alamat memori dari y
    printf("Alamat y = %p\n", &y);

    return 0;
}

/*
1. Program ini menunjukkan bagaimana pointer bekerja dalam menyimpan alamat dan mengakses nilai variabel.
2. Pointer px menyimpan alamat variabel x, sehingga *px dapat digunakan untuk mengambil nilai x.
3. Variabel y mengambil nilai dari *px, sehingga nilai y menjadi sama dengan x
4. Penambahan perintah printf("Alamat y = %p\n", &y); menunjukkan bahwa variabel y memiliki alamat memori yang berbeda dari x
5. Jika px tidak diinisialisasi terlebih dahulu sebelum digunakan (y = *px;), maka akan terjadi error atau perilaku tidak terduga karena pointer menunjuk ke lokasi yang tidak diketahui dalam memori
*/