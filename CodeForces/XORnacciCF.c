#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, n;
        scanf("%d %d %d", &a, &b, &n);
        
        
        int value = n % 3;

        if (value == 0) {
            printf("%d\n", a);
        } else if (value == 1) {
            printf("%d\n", b);
        } else {
            printf("%d\n", a ^ b);
        }
    }
    return 0;
}
