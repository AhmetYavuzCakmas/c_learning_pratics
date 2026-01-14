#include <stdio.h>
#include <string.h>

int main() {
    char sehir[15] = "adana";
    char sehir1[15] = "erzurum";
    char sehir2[30] = ""; // Boþ bir dize ile baþlat

    // sehir ve sehir1'i sehir2'ye birleþtir
    strcpy(sehir2, sehir); // Önce sehir'i kopyala
    strcat(sehir2, sehir1); // Sonra sehir1'i ekle

    printf("%s\n", sehir2); // Çýktý: adanaerzurum
    return 0;
}
