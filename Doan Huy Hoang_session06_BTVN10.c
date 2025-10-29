#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("So am: -\n");
        n = -n; 
    }

    int temp = n;
    int divisor = 1;

    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }

    temp = n;
    while (divisor > 0) {
        int digit = temp / divisor;
        printf("%d\n", digit);
        temp %= divisor;
        divisor /= 10;
    }

    return 0;
}

