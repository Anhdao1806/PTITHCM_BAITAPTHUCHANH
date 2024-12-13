#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 0, soluongsonguyento = 2, i;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("%d so nguyen to dau tien la: ",n);
    while (count < n) {
        i = 1;
        for (int i = 2; i <= sqrt(soluongsonguyento); i++) {
            if (soluongsonguyento % i == 0) {
                i = 0;
                break;
            }
        }
        if (i == 1) {
            printf("%d ", soluongsonguyento);
            count++;
        }
        soluongsonguyento++;
    }

    return 0;
}

