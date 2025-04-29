#include <stdio.h>

int main (){
    int N,M;
    printf ("Введите занчение матрицы N x M");
    scanf ("%d%d", &N, &M);
    int a [N] [M];

   // Инициализация границ
   int left = 0; 
   int right = M -1;
   int top = 0;  
   int bottom = N-1;
   int num = 1; // Начальное число

   while (num <= N * M) {
    for (int j = left; j <= right; j++) { // Заполнение верхней строки
        a[top][j] = num++;
    }
    top++;

    for (int i = top; i <= bottom; i++) {  // Заполнение правого столбца
        a[i][right] = num++;
    }
    right--;

    if (top <= bottom) { // Заполнение нижней строки
        for (int j = right; j >= left; j--) {
            a[bottom][j] = num++;
        }
        bottom--;
    }

   
    if (left <= right) {  // Заполнение левого столбца
        for (int i = bottom; i >= top; i--) {
            a[i][left] = num++;
        }
        left++;
    }
}
    for (int i = 0; i < N; i ++){ // Вывод матрицы
        for (int j = 0; j < M; j++){
            printf ("%2d ", a[i][j]);
        }
        printf ("\n");
    }

    return 0;
}