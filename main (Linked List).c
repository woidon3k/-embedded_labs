#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
    char title[100];
    float price;
    int pages;
    char language[30];
    float weight;
    int year;
    struct Book* next;
} Book;

void addBook(Book** head, char* title, float price, int pages, char* lang, float weight, int year) {
    Book* new_node = (Book*)malloc(sizeof(Book));
    strcpy(new_node->title, title);
    new_node->price = price;
    new_node->pages = pages;
    strcpy(new_node->language, lang);
    new_node->weight = weight;
    new_node->year = year;
    new_node->next = *head; 
    *head = new_node;
}

int main() {
    Book* list = NULL;

    addBook(&list, "Harry Potter and the Sorcerer's Stone", 350.50, 223, "English", 0.4, 1997);
    addBook(&list, "Harry Potter and the Chamber of Secrets", 380.00, 251, "English", 0.45, 1998);
    addBook(&list, "Harry Potter and the Prisoner of Azkaban", 410.25, 317, "English", 0.5, 1999);

    printf("--- Список книг про Гаррі Поттера ---\n");
    Book* current = list;
    while (current != NULL) {
        printf("Назва: %s | Рік: %d | Ціна: %.2f грн\n", current->title, current->year, current->price);
        current = current->next;
    }

    while (list != NULL) {
        Book* temp = list;
        list = list->next;
        free(temp);
    }

    return 0;
}