#include <stdio.h>

int main() {
    int a, b, c;
    int choice;
    int numbersEntered = 0; 
    do {
        
        printf("\n--- MENU ---\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Chon chuc nang (1-6): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Nhap so thu nhat: ");
                scanf("%d", &a);
                printf("Nhap so thu hai: ");
                scanf("%d", &b);
                printf("Nhap so thu ba: ");
                scanf("%d", &c);
                numbersEntered = 1; 
                break;
            case 2:
                if(numbersEntered) {
                    printf("Tong 3 so la: %d\n", a + b + c);
                } else {
                    printf("Vui long nhap 3 so truoc!\n");
                }
                break;
            case 3:
                if(numbersEntered) {
                    printf("Trung binh cong 3 so la: %.2f\n", (a + b + c) / 3.0);
                } else {
                    printf("Vui long nhap 3 so truoc!\n");
                }
                break;
            case 4:
                if(numbersEntered) {
                    int min = a;
                    if(b < min) min = b;
                    if(c < min) min = c;
                    printf("So nho nhat la: %d\n", min);
                } else {
                    printf("Vui long nhap 3 so truoc!\n");
                }
                break;
            case 5:
                if(numbersEntered) {
                    int max = a;
                    if(b > max) max = b;
                    if(c > max) max = c;
                    printf("So lon nhat la: %d\n", max);
                } else {
                    printf("Vui long nhap 3 so truoc!\n");
                }
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }

    } while(choice != 6);

    return 0;
}

