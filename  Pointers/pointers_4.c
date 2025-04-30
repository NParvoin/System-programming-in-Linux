#include <stdio.h>
#include <string.h>

char* findSubstring(char* str, char* substr) {
    char* p = strstr(str, substr); // Функция strstr для поиска подстроки
    return p; 
}
int main() {
    char str[100];  // Массив для основной строки
    char substr[50];// Массив для подстроки

    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Будем удалять символ новой строки ,если он есть

    printf("Введите подстроку для поиска: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = 0; 

    char* result = findSubstring(str, substr);

    if (result != NULL) {
        printf("Подстрока найдена: %s\n", result);
    } else {
        printf("Подстрока не найдена.\n");
    }

    return 0;
}
