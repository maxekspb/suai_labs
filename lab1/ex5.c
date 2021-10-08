/* Ввести действительное число x, вычислить и вывести y = x^10 + 2 * x^9 + 3 * x^8 + ... + 10 * x + 11. */

#include <stdio.h>

int main() {
    int a;
    float x, res, fx;
    if ((scanf("%f", &x)) != 1) {
        printf("error \n");
        return 1;    
    }
    else {
    a = 10;
    res = 11;
    fx = 1;
    while (a >= 0) {
        fx = fx * x;
        res = res + (fx * a);
        a--;
    }
    printf("%f", res);
    return 0;
    }
}
