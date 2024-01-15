#include <stdio.h>
#include <stdlib.h>



int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        int arr[n];

        int first = 0 ;
        int second = 0;

        for(int i=0 ; i<n ;i++){
            scanf("%d",&arr[i]);
        }

        int a = a[0];
        int b;
        for(int i=0 ; i<n ; i++){
            if(arr[i] != a){
                b = arr[i];
                break;
            }
        }

        for(int i=0 ; i<n ; i++){
            if(arr[i] == a){
                first ++;
            }
            else if(arr[i] == b){
                second ++;
            }
        }

        if(n == 2){
            printf("YES");
        }

        if(n%2 ==0 && first == second && first+second ==n){
            printf("YES \n");
        }
        else if(n%2 != 0 && (first == second + 1 || first + 1 == second ) && (first+second ==n)){
            printf("YES \n");
        }else{
            printf("NO \n");
        }

    }
    return 0;
}
    


