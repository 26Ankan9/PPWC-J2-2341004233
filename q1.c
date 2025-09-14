//Write a program to show all the datatypes in C.

#include <stdio.h>

int main() {
    // Integer types
    int a = 10;
    short b = 5;
    long c = 100000;
    long long d = 1234567890123;
    unsigned int e = 20;
    unsigned short f = 50;
    unsigned long g = 400000;
    unsigned long long h = 9876543210;

    // Floating-point types
    float i = 3.14f;
    double j = 3.14159265359;
    long double k = 3.141592653589793238L;

    // Character types
    char l = 'A';
    unsigned char m = 200;
    signed char n = -100;

    // Boolean type (in C99 and above with <stdbool.h>)
    #include <stdbool.h>
    bool flag = true;

    printf("Data Types in C:\n\n");

    printf("int: %d, size = %zu bytes\n", a, sizeof(a));
    printf("short: %d, size = %zu bytes\n", b, sizeof(b));
    printf("long: %ld, size = %zu bytes\n", c, sizeof(c));
    printf("long long: %lld, size = %zu bytes\n", d, sizeof(d));
    printf("unsigned int: %u, size = %zu bytes\n", e, sizeof(e));
    printf("unsigned short: %u, size = %zu bytes\n", f, sizeof(f));
    printf("unsigned long: %lu, size = %zu bytes\n", g, sizeof(g));
    printf("unsigned long long: %llu, size = %zu bytes\n", h, sizeof(h));

    printf("\nfloat: %f, size = %zu bytes\n", i, sizeof(i));
    printf("double: %lf, size = %zu bytes\n", j, sizeof(j));
    printf("long double: %Lf, size = %zu bytes\n", k, sizeof(k));

    printf("\nchar: %c, size = %zu bytes\n", l, sizeof(l));
    printf("unsigned char: %u, size = %zu bytes\n", m, sizeof(m));
    printf("signed char: %d, size = %zu bytes\n", n, sizeof(n));

    printf("\nbool: %d, size = %zu bytes\n", flag, sizeof(flag));

    return 0;
}
