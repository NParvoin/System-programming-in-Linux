#include <stdio.h>
#include <string.h>

#define MAX_ABONENTS 100
#define NAME_LENGTH 50
#define PHONE_LENGTH 15

typedef struct {
    char name[NAME_LENGTH];
    char phone[PHONE_LENGTH];
} Abonent;

Abonent abonents[MAX_ABONENTS];
int count = 0;

void addAbonent(const char *name, const char *phone) {
    if (count < MAX_ABONENTS) {
        strncpy(abonents[count].name, name, NAME_LENGTH);
        strncpy(abonents[count].phone, phone, PHONE_LENGTH);
        count++;
    } else {
        printf("Abonent list is full!\n");
    }
}

void displayAbonents() {
    for (int i = 0; i < count; i++) {
        printf("Name: %s, Phone: %s\n", abonents[i].name, abonents[i].phone);
    }
}

Abonent* findAbonent(const char *name) {
    for (int i = 0; i < count; i++) {
        if (strcmp(abonents[i].name, name) == 0) {
            return &abonents[i];
        }
    }
    return NULL;
}

int main() {
    addAbonent("Artem", "8982-483-32-64");
    addAbonent("Maria", "8913-874-75-83");
    
    displayAbonents();
    
    Abonent *found = findAbonent("Artem");
    if (found) {
        printf("Found: %s, Phone: %s\n", found->name, found->phone);
    } else {
        printf("Abonent not found.\n");
    }
    
    return 0;
}
