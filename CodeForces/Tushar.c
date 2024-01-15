#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t > 0) {
        long long int a, b, k;
        scanf("%lld %lld %lld", &a, &b, &k);

        long long int result;

        if (k % 2 == 0) {
            result = (k / 2) * (a - b);
        } else {
            result = (((k + 1) / 2) * (a - b)) + b;
        }

        printf("%lld\n", result);
        t--;
    }

    return 0;
}
