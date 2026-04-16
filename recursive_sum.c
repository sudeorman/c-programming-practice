#include <stdio.h>

int toplam(int n) {
    if (n == 1)
        return 1;
    return n + toplam(n - 1);
}

int main() {
    int n = 5;
    printf("%d", toplam(n));
    return 0;
}
