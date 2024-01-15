#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    char arr[n];
    scanf("%s",arr);

    int CntZ =0;
    int CntN =0;

    for(int i=0 ; i< n ; i++){
        if(arr[i] == 'z'){
            CntZ += 1;
        }
        else if(arr[i] == 'n'){
            CntN += 1;
        }
    }

    for(int i=0 ; i<CntN ; i++){
        printf("1 ");
    }
    for(int i=0 ; i<CntZ ; i++){
        printf("0 ");
    }



    return 0;
}