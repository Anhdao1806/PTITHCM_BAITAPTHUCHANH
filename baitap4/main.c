#include <stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Cac uoc cua %d: ", n);
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

