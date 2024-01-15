#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    char a[3];
    scanf("%s", a);

    int count = 0;
    char col = a[0];
    int row = a[1] - '0';

    for (int i = 1; i <= 8; i++) {
        if (i != row) {
            // printf("%c%d\n", col, i);
            count++;
        }
    }

    for (char i = 'a'; i <= 'h'; i++) {
        if (i != col) {
            // printf("%c%d\n", i, row);
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
