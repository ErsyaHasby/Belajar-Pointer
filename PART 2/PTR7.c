#include <stdio.h>

int main()
{
    char *pkota = "BANDUNG"; // String literal, tidak bisa diubah
    char kota[] = "BANDUNG"; // Array, bisa diubah

    puts(pkota); // Output: BANDUNG
    puts(kota);  // Output: BANDUNG

    // pkota[0] = 'C';        // ERROR: bisa menyebabkan crash atau segfault
    kota[0] = 'C'; // Boleh, karena array bisa diubah
    puts(kota);    // Output: CANDUNG

    return 0;
}