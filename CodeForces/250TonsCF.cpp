#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        int a[n];
        for(int i=0 ; i<n ; i++){
            scanf("%d",&a[i]);
        }

        sort(a,a+n);

        int small = 0,big = 0;

        for(int i=0 ; i<n/2 ; i++){
            small += a[i];
        }

        for(int i=n/2 ; i<n ; i++){
            big += a[i];
        }

        printf("%d\n",big-small);
    }

    return 0;
}