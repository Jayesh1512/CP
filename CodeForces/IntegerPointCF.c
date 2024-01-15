#include<stdio.h>

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
        int m;
        scanf("%d",&m);

        int b[m];

        for(int i=0 ; i<m ; i++){
            scanf("%d",&b[i]);
        }

        printf("Q %d \n",m>n ? m:n);

    }
    return 0;
}   