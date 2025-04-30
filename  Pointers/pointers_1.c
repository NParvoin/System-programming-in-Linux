#include <stdio.h>

int main (){
    int a;
    char b;

    printf ("Введите число :");
    scanf ("%d", &a);

    getchar ();

    printf ("Значение третьего байта (0 - 255):");
    scanf ("%c", &b);
 
        char *t = (char*) &a;
        t [2] = b;
        printf ("Измененное число : %d\n", a);
    
    return 0;
}