#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    char arr[n];
    scanf("%s",arr);

    for(int i=0 ; i < (n%4) ; i++ ){
        printf("1 ");
    }
    for(int i = 0 ; i < n/4-1 ; i++){
        printf("0 ");
    }

    return 0;

}