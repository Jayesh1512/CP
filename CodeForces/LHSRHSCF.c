#include <stdio.h>
#include <stdlib.h>

int main() {
    int l, r, a; 
    scanf("%d %d %d" ,&l , &r ,&a);
    int res; 


    if (l == r) {
        res = 2 * l + a;


        if (res % 2 == 1) {
            res--;
        }
    } else {
        int m = (l < r) ? l : r; 
        int d = abs(l - r);      

        if (d >= a) {
            m += a;
            res = m + m;
        } else {
            m = (l > r) ? l : r; 
            a -= d;


            if (a % 2 == 1) {
                a--;
            }

            res = m + m + a;
        }
    }


    printf("%d\n", res);

    return 0;
}
