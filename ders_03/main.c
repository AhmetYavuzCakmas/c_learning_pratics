#include <stdio.h>

int main() {
    // Mant�ksal Operat�rler (Logical Operators)
    int a = 1, b = 0;
    printf("Mantiksal Operatorler:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a && b (AND): %d\n", a && b); // Mant�ksal VE: 1 ve 0 = 0
    printf("a || b (OR): %d\n", a || b);  // Mant�ksal VEYA: 1 veya 0 = 1
    printf("!a (NOT): %d\n", !a);         // Mant�ksal DE��L: !1 = 0

    // Bit D�zeyinde Operat�rler (Bitwise Operators)
    unsigned int x = 5;  // Binary: 0101
    unsigned int y = 3;  // Binary: 0011
    printf("\nBit Duzeyinde Operatorler:\n");
    printf("x = %u (Binary: 0101), y = %u (Binary: 0011)\n", x, y);
    printf("x & y (Bitwise AND): %u\n", x & y);  // 0101 & 0011 = 0001 (1)
    printf("x | y (Bitwise OR): %u\n", x | y);   // 0101 | 0011 = 0111 (7)
    printf("x ^ y (Bitwise XOR): %u\n", x ^ y);  // 0101 ^ 0011 = 0110 (6)

    // <<2 ifadeyi bit li bir ifadeyede �evir ve 2 birim sola kayd�r
    // >>2 ifadeyi bit li bir ifadeyede �evir ve 2 birim sa�a kayd�r

    return 0;
}
