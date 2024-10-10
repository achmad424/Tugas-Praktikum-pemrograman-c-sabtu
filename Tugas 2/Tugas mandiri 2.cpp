#include <stdio.h>
#include <math.h>

	int main() {
	
	float diameter, jari_jari, volume;
	
	diameter = 15.0;
	
	jari_jari = diameter / 2.0;
	
	volume = (4.0 / 3.0) * M_PI * pow(jari_jari, 3);
	
	printf("Diameter bola: %.2fcm\n", diameter);
	printf("Jari_jari bola: %.2fcm\n", jari_jari);
	printf("Volume bola: %.2fcm\n", volume);
	
	return 0;
}
