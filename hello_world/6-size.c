#include <stdio.h>

int main(void) {
    printf("Tamaño de tipos de datos en bytes:\n");
    printf("size of a char): %zu byte(s)\n", sizeof(char));
    printf("size of a short): %zu byte(s)\n", sizeof(short));
    printf("size of a int): %zu byte(S)\n", sizeof(int));
    printf("size of a long: %zu byte(s)\n", sizeof(long));
    printf("size of a long long: %zu byte(s)\n", sizeof(long long));
    printf("size of a float: %zu byte(s)\n", sizeof(float));
    printf("size of a double: %zu byte(s)\n", sizeof(double));
    printf("size of a long double: %zu byte(s)\n", sizeof(long double));

    return 0;
}
