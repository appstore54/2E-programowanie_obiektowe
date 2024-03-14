#include <iostream>

int main() {
    const int num_subjects = 4;
    char subjects[num_subjects][50];

    for (int i = 0; i < num_subjects; ++i) {
        printf("Podaj nazwę przedmiotu %d: ", i + 1);
        scanf("%s", subjects[i]);
    }

    printf("Zawartość tablicy:\n");
    for (int i = 0; i < num_subjects; ++i) {
        printf("%d. %s\n", i + 1, subjects[i]);
    }

    return 0;
}

