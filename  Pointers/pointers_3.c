#include <stdio.h>

int main (){
    int a [10];
    for (int i = 0; i < 10; i ++){
        a[i] = i + 1;  
    }
int *ptr = a;
for (int i = 0; i < 10; i++)
    printf ("%d ", *(ptr + i));

    return 0;
}