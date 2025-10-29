#include <stdio.h>
#include <math.h>

int main(){
	int n , i;
	
	int start = 1 , end = 10;
	 printf("Nhap mot so tu 1 den 10: ");
    scanf("%d", &n);

    printf("Bang cuu chuong cua %d:\n", n);
    for(i = start; i <= end; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

	return 0;
}
