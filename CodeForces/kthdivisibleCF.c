#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        long long int n,k;
        scanf("%lld %lld",&n,&k);

        if(n==k){
            printf("%lld \n",n+1);
        }else{
            long long int x = k/(n-1) ; 
            long long int p = k+x;
            if(p % n != 0){
                printf("%lld\n",(p));
            }else{
                printf("%lld\n",(p-1));
            }
            
        }


    }
    return 0;
}