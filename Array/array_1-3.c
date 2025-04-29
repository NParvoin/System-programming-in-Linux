/*Здесь представленно 1 и 3 задание */

#include <stdio.h>
#define MAX_SIZE 100

int main (){

    int N,M,size;
    int a[MAX_SIZE][MAX_SIZE];

    printf ("Vvedite massiv N (strok) x M (stolb)");
    scanf ("%d%d", &N,&M);
    
    printf ("Vvedite element matrix");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        }

    for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
        printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
    return 0;
}