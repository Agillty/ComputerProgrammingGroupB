#include<stdio.h>

int add(int x, int y);
float fadd(float x, float y);
int sub(int x, int y);
float fsub(float x, float y);
int mult(int x, int y);
int div(int x, int y);

int main() {
    int a = 5;
    int b = 10;
    int sum = add(a, b);
    float fa=2.13;
    float fb=3.221;
    printf("Sm of %d and %d is %d\n", a, b, sum);
    printf("Sum of %d and %d is %d\n", a, b, sum);
    printf("Sum of %f and %f is %f\n",fa, fb, fadd(fa,fb));
    printf("Ans of %d - %d is %d\n", a, b, sub(a,b));
    printf("Ans of %f - %f is %f\n", fa, fb, fsub(fa,fb));
    printf("Product of %d and %d is %d\n", a, b, mult(a,b));
    printf("Division of %d and %d is %d\n", b, a, div(b,a));
    return 0;
}
int add(int x, int y) {
    return x + y;
}
float fadd(float x, float y)
{
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}
float fsub(float x, float y) {
    return x - y;
}
int mult(int x, int y) {
    return x * y;
}
int div(int x, int y) {
    return x / y;
}