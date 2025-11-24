#include<stdio.h>

int add(int x, int y);
float fadd(float x, float y);
int sub(int x, int y);
int mult(int x, int y);


int main() {
    int a = 5;
    int b = 10;
    int sum = add(a, b);
    float fa= 12.5;
    float fb=5.2;
    printf("Sum of %d and %d is %d\n", a, b, sum);
    printf("Sum of %f and %f is %f\n",fa, fb, fadd(fa,fb));
    printf("Ans of %d - %d is %d\n", a, b, sub(a,b));
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