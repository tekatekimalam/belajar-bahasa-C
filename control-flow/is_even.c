#include <stdio.h>

int main() {
    // type here
    int n;
    printf("Masukkan angka yang ingin di cek: ");
    scanf("%d", &n);

    // if(n % 2 == 0)
    //     printf("%d adalah bilangan genap\n", n);
    // else
    //     printf("%d adalah bilangan ganjil\n", n);    
        
    // ternary operator
    (n % 2 == 0) ? printf("%d adalah bilangan genap\n", n) :
        printf("%d adalah bilangan ganjil\n", n);    

    return 0;
}