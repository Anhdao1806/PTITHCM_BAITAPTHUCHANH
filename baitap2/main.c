#include <stdio.h>;
int main (){
    int soGio, luongCoBan , phuCap,tongLuong;
    float mucLuong;
    printf ("Nhap vao so gio lam viec");
    scanf ( "%d",&soGio);
    printf ("Nhap vao muc luong theo gio");
    scanf ("%f",&mucLuong);
    luongCoBan = soGio * mucLuong;
    printf ( "Muc luong co ban la :%d\n",luongCoBan);
    if ( soGio > 160 ){
        phuCap = luongCoBan * 0.1;
        tongLuong = luongCoBan + phuCap;
        printf ("Tien phu cap nhan duoc la : %d", phuCap);
        printf ("Tong luong la : %d",tongLuong);
    }else{
        printf ("Tong luong la : %d\n",luongCoBan);
    }
    return 0 ;
}

