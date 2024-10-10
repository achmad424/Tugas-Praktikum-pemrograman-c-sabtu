#include <stdio.h>

int main() {

	float alas, tinggi, luas;
	
	alas = 8.0;
	tinggi = 5.0;
	
	luas = 0.5 * alas * tinggi;
	
	printf("Panjang alas: %.2f cm\n", alas);
	printf("Tinggi: %.2f cm\n", tinggi);
	printf("Luas Segitiga: 1/2 x a x t\n");
	printf("Hasilnya: %2.f cm^2\n", luas);
	
	return 0;
}
