#include <stdio.h>

int main() {
    float celcius, fahrenheit, reamur;

    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9/5) + 32;

    reamur = celcius * 4/5;

    printf("%.2f derajat Celcius setara dengan:\n", celcius);
    printf("%.2f derajat Fahrenheit\n", fahrenheit);
    printf("%.2f derajat Reamur\n", reamur);

    return 0;
}
