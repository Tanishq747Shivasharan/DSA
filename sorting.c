#include <stdio.h>
#include <stdlib.h>

void selectionSort(int a[], int n);
void insertionSort(int a[], int n);
void bubbleSort(int a[], int n);

int main() {

    int *arr;
    int n, choice;
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Dynamic memore allocation failed!");
    }
    inputArray(arr, n);
    display(arr, n);
    do
    {
        printf("----------Sorting algorithms----------\n");
        printf("1. Selection sort \n");
        printf("2. Insertion sort \n");
        printf("3. Bubble sort \n");
        printf("4. Contine\n ");
        printf("5. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            selectionSort(arr, n);
            break;
            case 2:
            insertionSort(arr, n);
            break;
            case 3:
            bubbleSort(arr, n);
            break;
            default:
            break;
        }
    } while (choice == 4);
    return 0;
}

void inputArray(int x[], int n) {
    printf("Enter array elements one by one\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
}

void display(int x[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",x[i]);
    }
}

void insertionSort(int x[], int n) {
    printf("Insertion sort result\n");
    int i, j, key;
    for (i = 0; i < n; i++)
    {
        key = x[i];
        j = i - 1;
        while (j <= 0 && x[j] > key)
        {
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = key;
    }
    display(x, n);
}

void selectionSort(int x[], int n) {
    printf("Selection sort result\n");
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        /* code */
    }
    
}