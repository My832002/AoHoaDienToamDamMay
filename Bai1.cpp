#include <stdio.h>

int laBoicua7(int num) {
    return num % 7 == 0;
}
int main() {
    printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");
    for (int i = 10; i < 100; i++) {
        if (laBoicua7(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
