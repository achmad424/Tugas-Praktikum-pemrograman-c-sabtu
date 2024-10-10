#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, sisiMiring;

    printf("Masukkan panjang alas segitiga siku-siku (cm): ");
    scanf("%f", &alas);

    printf("Masukkan panjang tinggi segitiga siku-siku (cm): ");
    scanf("%f", &tinggi);

    sisiMiring = sqrt(alas*alas + tinggi*tinggi);

    printf("Panjang sisi miring segitiga adalah %.2f cm\n", sisiMiring);

    return 0;
}
