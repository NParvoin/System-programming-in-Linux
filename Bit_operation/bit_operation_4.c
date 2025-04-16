#include <stdio.h>

int main() {

    unsigned int number, new3_bite;

    printf ("Введите положительное число:");
    scanf ("%u", &number);

    printf ("Введите значение третьего байта в диапозоне (0 - 255):");
    scanf ("%u", &new3_bite);   

    if (new3_bite > 255){
        printf ("Error\n");
        return 1;
    }

    number = (number & 0xFF00FFFF) | (new3_bite << 16); // ОБнуляем 3 байт и сдвигае новое значение на 16 бит влево,чтобы поместить его в третий байт.
    printf ("Получаем новое число: %u\n", number);
        return 0;
}