#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool kiemTraSoChinhPhuong(int number) {
    int sqrtValue = (int)sqrt(number);
    return (sqrtValue * sqrtValue == number);
}
void demSoChinhPhuong(int n) {
    int count = 0;
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = n - 1; i > 0; i--) {
        if (kiemTraSoChinhPhuong(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTong cong co %d so chinh phuong nho hon %d.\n", count, n);
}

int main() {
    int n = 50;

    // Gọi hàm đếm và in ra các số chính phương nhỏ hơn n
    demSoChinhPhuong(n);

    return 0;
}
