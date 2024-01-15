#include <stdio.h>

int lucky(int n){
    int temp;
    while(n>0){
        temp = n%10;
        if(temp != 4 && temp != 7){
            return 0;
            // not a lucky number
        }else{
            
            n = n/10;
        }
    }
    return 1;
}


int main(){
    
    int n;
    int count = 1;
    scanf("%d",&n);

    // factors


    for(int i=2 ; i<=n/2+1 ; i++){
        if(n%i == 0 && lucky(i) == 1){
            printf("YES");
            count = 0;
            break;
        }
            
        
    }
    if(lucky(n) == 1 && count == 1){
        printf("YES");
        count =0;    
    }
    if(count == 1)
        printf("NO");   


    return 0;
}