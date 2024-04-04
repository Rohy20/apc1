#include <stdio.h>


int main() {
    double gigabytes;
    double bytes;

    printf("Insira o valor em Gigabytes: ");
    scanf("%lf", &gigabytes);

    bytes = gigabytes * 1024 * 1024 * 1024;

    printf("%.2f Gigabytes equivale a %.0f Bytes.\n", gigabytes, bytes);

    return 0;
}