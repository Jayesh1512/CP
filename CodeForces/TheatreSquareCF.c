#include<stdio.h>
#include<math.h>

int main(){
    long long int n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    long long int temp;

    if(n > m){
        temp = n;
        n = m;
        m = temp;
    }

    if(a >= m){
        printf("%lld", (long long int)ceil((double)n/a));
    } else {
        printf("%lld", (long long int)(ceil((double)n/a) * ceil((double)m/a)));
    }

    return 0;
}
