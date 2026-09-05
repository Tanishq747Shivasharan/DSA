#include <stdio.h>
#include <stdlib.h>

void inputArray(int a[], int n);
void display(int a[], int n);
void selectionSort(int a[], int n);
void insertionSort(int a[], int n);
void bubbleSort(int a[], int n);

int main() {
    int *arr = NULL;
    int n, choice = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Dynamic memory allocation failed!\n");
        return 1;
    }

    inputArray(arr, n);
    display(arr, n);

    do {
        printf("\n----------Sorting algorithms----------\n");
        printf("1. Selection sort\n");
        printf("2. Insertion sort\n");
        printf("3. Bubble sort\n");
        printf("4. Continue\n");
        printf("5. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                selectionSort(arr, n);
                display(arr, n);
                break;
            case 2:
                insertionSort(arr, n);
                display(arr, n);
                break;
            case 3:
                bubbleSort(arr, n);
                display(arr, n);
                break;
            case 4:
                printf("Continuing...\n");
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (choice != 5);

    free(arr);
    return 0;
}

void inputArray(int x[], int n) {
    printf("Enter array elements one by one\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
}

void display(int x[], int n) {
    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", x[i]);
    }
    printf("\n");
}

void insertionSort(int x[], int n) {
    printf("\nInsertion sort result\n");
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = x[i];
        j = i - 1;
        while (j >= 0 && x[j] > key) {
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = key;
    }
}

void selectionSort(int x[], int n) {
    printf("\nSelection sort result\n");
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (x[j] < x[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = x[i];
            x[i] = x[minIndex];
            x[minIndex] = temp;
        }
    }
}

void bubbleSort(int x[], int n) {
    printf("\nBubble sort result\n");
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (x[j] > x[j + 1]) {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}