#include <stdio.h>

int main() {
    // type here
    int n, i;
    int sum = 0;

    do {
        printf("Masukkan angka: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("Jumlahnya adalah = %d\n", sum);
    
    return 0;
}