#include <stdio.h>
#include <ctype.h>

void to_lowercase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char text[100];

    printf("Введіть рядок великими літерами: ");
    fgets(text, sizeof(text), stdin);

    to_lowercase(text);

    printf("Результат: %s", text);

    return 0;
}