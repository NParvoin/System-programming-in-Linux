#include <stdio.h>

void printBinary(int n) { // int приниает знаковое число
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);

        if (i % 8 == 0)printf(" "); // разделение по байтам 
    } 
    printf("\n");
}

int main() {

    int number;
    printf("Введите отрицательное число: ");
    scanf("%d", &number);
    printf("Двоичное представление: ");
    printBinary(number);

    return 0;
}