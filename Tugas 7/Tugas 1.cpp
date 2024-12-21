#include <stdio.h>

int main() {
    int nilai[10];

    printf("Masukkan 10 nilai mahasiswa:\n");
    int i;
    for (i = 0; i < 10; ++i) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    printf("Daftar nilai mahasiswa yang lulus:\n");
    int i2;
    for (i2 = 0; i2 < 10; ++i2) {
        if (nilai[i2] >= 60) {
            printf("Nilai mahasiswa ke-%d: %d\n", i2 + 1, nilai[i2]);
        }
    }

    return 0;
}
