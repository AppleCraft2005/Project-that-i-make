//PROGRAM Kalkulator
#include <stdio.h>

void main() {
    int a,b,c;
    float e,f,g;
    char d;

    printf(" ------KALKULATOR SEDERHANA by JOVAN-----\n\n");
    printf("masukkan operasi yang anda inginkan : ");
    scanf("%c", &d);

    if (d == '+') {
        printf("masukkan bilangan 1 : ");
        scanf("%d", &a);
        printf("masukkan bilangan 2 : ");
        scanf("%d", &b);

        printf("HASIL PENJUMLAHAN DARI %d dan %d adalah : %d ", a, b, c = a + b );
    }
    else if (d == '-') {
        printf("masukkan bilangan 1 : ");
        scanf("%d", &a);
        printf("masukkan bilangan 2 : ");
        scanf("%d", &b);

        printf("HASIL PENGURANGAN DARI %d dan %d adalah : %d ", a, b, c = a-b);
    }
    else if (d == '*') {
        printf("masukkan bilangan 1 : ");
        scanf("%d", &a);
        printf("masukkan bilangan 2 : ");
        scanf("%d", &b);

        printf("HASIL PERKALIAN DARI %d dan %d adalah : %d ", a, b, c = a*b);
    }
    else if (d == '/') {
        printf("masukkan bilangan 1 : ");
        scanf("%f", &e);
        printf("masukkan bilangan 2 : ");
        scanf("%f", &f);

        printf("HASIL PEMBAGIAN DARI %.0f dan %.0f adalah : %.2f ", e, f, g = e/f);
    }
    else {
        printf("operasi tidak valid, silahkan coba lagi");
    }

}

//kekurangan kalkulator ini, pada saat pembagian yg hasilnya tidak bulat, jika meggunakan kalkulator ini maka hasilnya akan dibulatkan kebawah