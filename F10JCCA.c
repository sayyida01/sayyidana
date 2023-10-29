#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][20], int n) {
    int swapped;
    do {
        swapped = 0;
        for (int i = 0; i < n - 1; i++) {
            if (strcmp(arr[i], arr[i + 1]) > 0) {
                char temp[20];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[i + 1]);
                strcpy(arr[i + 1], temp);
                swapped = 1;
            }
        }
    } while (swapped);
}

int main() {
    char name[10][20] = {"Fahmi Harahap", "Icha Nurlisa", "Agus Gumilang", "Zelda Zuraida", "Felix Halim", "Deddy Corbuizer", "Hassan Makmur", "Makmun Sukur", "Bella Christie", "Chelshe Love"};

    int n = 10;

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }

    bubbleSort(name, n);

    printf("\nSorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}

