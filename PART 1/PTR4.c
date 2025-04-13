#include <stdio.h> // Mengimpor library stdio.h untuk fungsi input-output (printf)

int main()
{
    int z, s, *pz, *ps; // Mendeklarasikan dua variabel integer z dan s, serta dua pointer pz dan ps

    z = 20; // Menginisialisasi variabel z dengan nilai 20
    s = 30; // Menginisialisasi variabel s dengan nilai 30

    pz = &z; // Menyimpan alamat variabel z ke dalam pointer pz
    ps = &s; // Menyimpan alamat variabel s ke dalam pointer ps

    *pz = *pz + *ps; // Mengubah nilai z (yang ditunjuk oleh pz) menjadi nilai z + nilai s, yaitu 20 + 30 = 50

    // Menampilkan nilai dari z dan s setelah perubahan
    printf("z  = %d\ns  =  %d\n", z, s); // Output: z = 50, s = 30

    return 0;
}

/*
1. Program ini menunjukkan bagaimana pointer dapat digunakan untuk mengakses dan mengubah nilai variabel di memori.
2. Dengan pointer, kita dapat memanipulasi variabel secara tidak langsung dengan mengubah nilai yang ditunjuk oleh pointer tersebut.
3. Nilai variabel z berhasil diubah menjadi 50, sementara s tetap 30.*/