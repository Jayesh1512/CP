#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, a, one = 0;

    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        
        if (v[i] == 1)
            one++;
    }

    // Sort the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    if (n == 1) {
        printf("1\n");
        return 0;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[j] % v[i] == 0) {
                for (int k = j; k < n - 1; k++) {
                    v[k] = v[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[j] % v[i] == 0) {
                for (int k = j; k < n - 1; k++) {
                    v[k] = v[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    if (one > 0) {
        printf("1\n");
    } else {
        printf("%d\n", n);
    }



    

    return 0;
}
