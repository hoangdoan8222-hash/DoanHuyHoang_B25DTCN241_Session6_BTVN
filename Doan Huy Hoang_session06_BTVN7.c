#include <stdio.h>

int main() {
    int a, b, m, n, r;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    m = a;
    n = b;

    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, m);

    return 0;
}

