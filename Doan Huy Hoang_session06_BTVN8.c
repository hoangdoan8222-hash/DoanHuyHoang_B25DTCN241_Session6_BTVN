#include <stdio.h>

int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}

int main() {
    int a, b;

    printf("Nhap vao so nguyen duong a: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen duong b: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return 1; 
    }

    int result = BCNN(a, b);
    printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, result);

    return 0;
}

