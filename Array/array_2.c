#include <stdio.h>

int main(){
    int n;
    printf ("Размер массива- ");
    scanf ("%d", &n);
    int a [n];

    for (int i = 0; i < n; i++){
        a[i] = i;
        printf ("Введите элемент[%d] - ", i);
        scanf ("%d", &a[i]);
    }

    printf ("Результат : ");
    for (int i = 0; i < n; i++){
        
       printf ("%d", a[i]);
    }

    printf ("\nОбратный порядок : ");
    for (int i = n - 1; i  >= 0; --i){
        
       printf ("%d", a[i]);
    }
    
    

    return 0;
}