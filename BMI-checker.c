#include <stdio.h>

int main() {
    float berat, tinggi, bmi;

    printf("Masukkan berat badan Anda (kg): ");
    scanf("%f", &berat);

    printf("Masukkan tinggi badan Anda (cm): ");
    scanf("%f", &tinggi);

    // Ubah tinggi ke meter 
    tinggi = tinggi / 100;

    // Hitung BMI (body mass index)
    bmi = berat / (tinggi * tinggi);

    printf("\nBMI Anda adalah: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Berat badan kamu kurang!\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Berat badan kamu ideal!\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("Berat badan kamu berlebih (Overweight)!\n");
    } else {
        printf("Obesitas! ayo diet dan hidup sehat!\n");
    }
}
