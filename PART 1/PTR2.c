#include <stdio.h> // Mengimpor library stdio.h untuk fungsi input-output (printf)
int main()
{
    float *pu; // Deklarasi pointer untuk tipe data int
    float nu;  // Deklarasi variabel int

    float u = 1234; // Deklarasi dan inisialisasi variabel integer u

    pu = &u;  // Menyimpan alamat variabel u ke dalam pointer pu
    nu = *pu; // Mengambil nilai dari alamat yang ditunjuk oleh pu

    printf("u  = %f\n", u);  // Menampilkan nilai dari u
    printf("nu = %f\n", nu); // Menampilkan nilai dari nu

    return 0;
}

/*
1. Program ini bertujuan untuk memahami penggunaan pointer dalam mengambil nilai dari variabel lain.
2. Kesalahan utama: pointer pu dideklarasikan sebagai float *, tetapi menyimpan alamat variabel int.
3. Saat program dieksekusi, kemungkinan besar akan terjadi error atau nilai nu akan menjadi nilai acak.
4. Solusi yang benar adalah menggunakan int *pu agar sesuai dengan tipe data u.
5. Pointer harus selalu menyimpan alamat dari variabel dengan tipe data yang sesuai agar tidak terjadi error.
*/