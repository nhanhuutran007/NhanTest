#include <stdio.h>

int main() {
    int n, sochan, tong = 0;
    printf("Nhap mot so nguyen duong: ");
    
	scanf("%d", &n);
    do {
        if(n <= 0) {
            printf("Dao vao khong hop le, hay nhap lai: ");
            scanf("%d", &n);
        }
    } while(n<= 0);
    
	printf("Su dung vong lap for:\n");
    for(sochan = 2; sochan <= n; sochan += 2) {
        tong += sochan;
    }
    printf("Tong cua tat ca cac so chan tu 1 den %d la %d\n", n, tong);

    sochan = 2;
    tong = 0;
    printf("Su dung vong lap while:\n");
    while(sochan <= n) {
        tong += sochan;
        sochan += 2;
    }
    printf(" Tong cua tat ca cac so chan tu 1 den %d la %d\n", n, tong);

    sochan = 2;
    tong = 0;
    printf(" Su dung vong lap do-while:\n");
    do {
        tong += sochan;
        sochan += 2;
    } while(sochan <= n);
    printf("Tong cua tat ca cac so chan tu 1 den %d la %d\n", n, tong);

    return 0;
}

