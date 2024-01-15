#include<stdio.h>

int main(){

    int n,d,sum=2;

    scanf("%d %d",&n,&d);    

    int a[n];

    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }

    for(int i=0 ;i<n-1 ; i++){
        if(a[i+1] - a[i] > 2*d){
            sum +=2;
        }
        else if(a[i+1] - a[i] == 2*d){
            sum+=1;
        }
    }
    printf("%d",sum);

    return 0;
}