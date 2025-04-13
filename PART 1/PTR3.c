#include <stdio.h> // Mengimpor library stdio.h untuk fungsi input-output (printf)

int main()
{
    float d, *pd; // Mendeklarasikan variabel d bertipe float dan pointer pd yang bertipe float

    d = 54.5; // Menginisialisasi variabel d dengan nilai 54.5

    printf("Isi d semula  = %g\n", d); // Menampilkan nilai awal dari d (54.5)

    pd = &d;        // Mendeklarasikan alamat variabel d ke pointer pd
    *pd = *pd + 10; // Nilai yang ditunjuk oleh pd (yaitu d) diubah menjadi nilai semula ditambah 10 (54.5 + 10 = 64.5)

    printf("Isi d kini    = %g\n", d); // Menampilkan nilai dari d setelah diubah melalui pointer pd (64.5)

    return 0;
}

/*
1. Program ini mendemonstrasikan cara menggunakan pointer untuk mengakses dan memodifikasi nilai variabel.
2. Pointer memungkinkan kita untuk mengubah nilai variabel yang ditunjuk tanpa langsung menggunakan nama variabel tersebut.
3. Nilai variabel d diubah melalui pointer pd tanpa perlu akses langsung ke variabel d.
*/