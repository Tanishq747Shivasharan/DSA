#include <stdio.h>

/* int main(){
    printf("Hello world");
    return 0;
} */

int main() {
    void swap(int a, int b);
    int a = 10, b=20;
    swap(a ,b);
    return 0;
}

void swap(int x, int y) {
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
    printf("a = %d\n",x);
    printf("b = %d",y);
}