#include <stdio.h>
#include <string.h>

void rightRotate(char *str, int k) {
    int len = strlen(str);
    if (len == 0) return;

    k = k % len;

    while (k--) {
        char last = *(str + len - 1);

        for (int i = len - 1; i > 0; i--) {
            *(str + i) = *(str + i - 1);
        }

        *str = last;
    }
}

int main() {
    char str[100] = "omer";
    int k = 2;

    rightRotate(str, k);
    printf("%s", str);

    return 0;
}
