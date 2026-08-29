#include <stdio.h>

void display(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%u=%d\n",&a[i],a[i]);
    }
}

void input(int x[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter array element x[%d]: ", i);
        scanf("%d",&x[i]);
    }
}

int largest(int x[], int n) {
    int largest = x[0];
    for (int i = 0; i < n; i++)
    {
        if (x[i] > largest)
        {
            largest = x[i];
        }   
    }
    return largest;
}

int smallest(int x[], int n) {
    int smallest = x[0];
    for (int i = 0; i < n; i++)
    {
        if (x[i] < smallest) 
        {
            smallest = x[i];
        }
        
    }
    return smallest;
    
}

void main(){
    int arr[5];
    input(arr, 5);
    display(arr, 5);

    printf("Largest element = %d\n", largest(arr, 5));

    printf("Smallest element = %d\n", smallest(arr, 5));
}