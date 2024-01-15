#include<stdio.h>
 
int main(){
    int k,s;
    scanf("%d %d",&k,&s);
    int count = 0;
 
    for(int x=0 ; x<= k ; x++){
        for(int y=0 ; y<=k ; y++){
            if(s-x-y >= 0 && s-x-y <=k ){
                count++;
            }
        }
    }
    printf("%d",count);
 
    return 0;
}