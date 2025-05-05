#include <stdio.h>
#include <string.h>

#define MAX_ABONENTS 100 // Константа для максимального количества пользователей

// Определяем структуру, которая содержит три поля - имя, фамилия, телефон
struct abonent{
    char name [10];
    char second_name [10];
    char tel [10];

};

struct abonent phonebook[MAX_ABONENTS]; // информация всех обонентов
int count = 0;

void add_abonent (){
    if (count >= MAX_ABONENTS){
        printf("Справочник переполнен. Абонента не добавить.");
        return;
    }
    printf("Введите имя абонента: ");
    scanf("%s", phonebook[count].name);
    printf("Введите фамилию абонента: ");
    scanf("%s", phonebook[count].second_name);
    printf("Введите телефон абонента: ");
    scanf("%s", phonebook[count].tel);
    count++;
    printf("Абонент добавлен.\n");

}

// Удаление абонента
void delete_abonent() {
    char name[10];
    printf("Введите имя абонента для удаления: ");
    scanf("%s", name);
    
    for (int i = 0; i < count; i++) {
        if (strcmp(phonebook[i].name, name) == 0) {
            memset(&phonebook[i], 0, sizeof(struct abonent));
            printf("Абонент удален.\n");
            for (int j = i; j < count - 1; j++) {
                phonebook[j] = phonebook[j + 1];
            }
            count--;
            return;
        }
    }
    printf("Абонент с именем %s не найден.\n", name);
}

// Поиск абонента
void search_abonent() {
    char name[10];
    printf("Введите имя для поиска: ");
    scanf("%s", name);
    
    printf("Результаты поиска:\n");
    for (int i = 0; i < count; i++) {
        if (strcmp(phonebook[i].name, name) == 0) {
            printf("Имя: %s, Фамилия: %s, Телефон: %s\n", 
                   phonebook[i].name, 
                   phonebook[i].second_name, 
                   phonebook[i].tel);
        }
    }
}

// Отображать всех абонентов
void display_all_abonents() {
    printf("Список всех абонентов:\n");
    for (int i = 0; i < count; i++) {
        if (strlen(phonebook[i].name) > 0) { // Проверяем не удален ли абонент
            printf("Имя: %s, Фамилия: %s, Телефон: %s\n", 
                   phonebook[i].name, 
                   phonebook[i].second_name, 
                   phonebook[i].tel);
        }
    }
}

int main(){
    int choice;
    do {
        printf("\nМеню:\n");
        printf("1) Добавить абонента\n");
        printf("2) Удалить абонента\n");
        printf("3) Поиск абонентов по имени\n");
        printf("4) Вывод всех записей\n");
        printf("5) Выход\n");
        printf("Выберите пункт меню: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                add_abonent();
                break;
            case 2:
                delete_abonent();
                break;
            case 3:
                search_abonent();
                break;
            case 4:
                display_all_abonents();
                break;
            case 5:
                printf("Выход из программы.\n");
                break;
            default:
                printf("Неверный выбор. Пожалуйста, попробуйте снова.\n");
        }
    } while (choice != 5);


    return 0;
}


