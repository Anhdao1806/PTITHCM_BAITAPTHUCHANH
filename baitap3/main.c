#include <stdio.h>


int main() {
    float b,thanhtien;
    int a;
    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap don vi tien te muon chuyen(1-8): ");
    scanf("%d",&a);
    printf("Nhap gia tien muon quy doi : ");
    scanf("%f",&b);
    switch(a)
    {
        case 1:
            thanhtien=b*23500;
            printf("%.2f USD = %.2f VND\n",b,thanhtien);
            break;
        case 2:
            thanhtien=b*25000;
            printf("%.2f EUR = %.2f VND\n",b,thanhtien);
            break;
        case 3:
            thanhtien=b*28000;
            printf("%.2f GBP = %.2f VND\n",b,thanhtien);
            break;
        case 4:
            thanhtien=b*180;
            printf("%.2f JPY = %.2f VND\n",b,thanhtien);
            break;
        case 5:
            thanhtien=(b/23500);
            printf("%.2f VND = %.2f USD\n",b,thanhtien);
            break;
        case 6:
            thanhtien=(b/25000);
            printf("%.2f VND = %.2f EUR\n",b,thanhtien);
            break;
        case 7:
            thanhtien=(b/28000);
            printf("%.2f VND = %.2f GBP\n",b,thanhtien);
            break;
        case 8:
            thanhtien=(b/180);
            printf("%.2f VND = %.2f JPY\n",b,thanhtien);
            break;
        default:
        {
            printf("Lua chon khong hop le!");
        }
    }
    return 0;
}
