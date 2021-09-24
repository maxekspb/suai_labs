// Ввести действительное число x, вычислить и вывести y = x^10 + 2 * x^9 + 3 * x^8 + ... + 10 * x + 11.

#include <stdio.h>

int main() {
    int x, y, a, res, st, i;
    scanf("%d", &x);
    y = 0;
    a = 1;
    res = 0;
        while(y <= 10) {
        st = 1;
            for(i = y; i < 10; i++) {
                st = st * x;
            }
        y++;
        res = res + (st * a);
        a++;
        }
    printf("%d", res);
    return 0;
}


// проверка проверка проверка