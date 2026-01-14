#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, original_number, sum = 0, kalan, valid = 0;

    // Kullanýcý 4 basamaklý bir sayý girene kadar döngü
    while (valid == 0) {
        printf("Enter a four-digit number: ");
        scanf("%d", &number);

        // Sayý 4 basamaklý mý kontrol et
        if (number < 1000 || number > 9999) {
            printf("Lütfen 4 basamaklý bir sayý giriniz.\n");
        } else {
            valid = 1; // Geçerli sayý girildi, döngüden çýk
        }
    }

    // Orijinal sayýyý sakla
    original_number = number;

    // Basamaklarý ayýr ve topla
    while (number > 0) {
        kalan = number % 10;
        sum += kalan;
        number /= 10;
    }

    // Sonucu yazdýr
    printf("Girmis oldugunuz sayi olan %d rakamlarinin toplami %d dir\n", original_number, sum);

    return 0;
}
