#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 0, snt = 2, i;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("Cac so nguyen to dau tien la: ");
    while (count < n) {
        i = 1;
        for (int s = 2; s <= sqrt(snt); s++) {
            if (snt % s == 0) {
                i = 0;
                break;
            }
        }
        if (i == 1) {
            printf("%d ", snt);
            count++;
        }
        snt++;
    }

    return 0;
}





