#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);

    char a[n];
    scanf("%s",a);

    int count = 0;

    for(int i=0 ; i<n ; i++){
        if(a[i] == a[i+1]){
            count += 1;
        }
    }
    printf("%d",count);

    return 0;
}