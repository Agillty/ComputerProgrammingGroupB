#include<stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);


int main() {
    int a = 5;
    int b = 10;
    int sum = add(a, b);
    printf("Sum of %d and %d is %d\n", a, b, sum);
    printf("Ans of %d - %d is %d\n", a, b, sub(a,b));
    return 0;
}
int add(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}