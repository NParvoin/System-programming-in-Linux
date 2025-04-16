#include <stdio.h>

int ones(unsigned int n){
    int one = 0;

    for (int i = 0; i < sizeof (n) * 8; i++ )
        one += (n >> i) & 1;
    
    return one;
}


int main(){

    unsigned int number;
    printf("Введите положительное число: ");
    scanf ("%d", &number);
    printf("Количество единиц в двоичном представлении: %d\n", ones(number));
    return 0;
}