#include <stdio.h>
#include <math.h>

int main() {
    int number, i;
    printf("Nhập một số nguyên dương: ");
    scanf("%d", &number);
    if (number<= 1) {
        printf("%d không phải là số nguyên tố.\n", number);
    }
    else {
        for (i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                printf("%d không phải là số nguyên tố.\n", number);
                return 0;
            }
        }
        
        //
        printf("%d là số nguyên tố.\n", number);
        
        return 0;
    }
}

