#include<stdio.h>

int main(){

    int l,r,a;
    scanf("%d %d %d",&l,&r,&a);

    if(l==0 || r == 0){
        printf("0");
    } 
    if(l==r && l==a){
        l+r+a % 2 == 0 ? printf("%d",l+r+a) : printf("%d" , l+r+a-1) ; 
    }       

    if(a != 0 && (l!=r && l!=a)){
        int s;
        s = (l<r ? l : r);
        l = (l>r ? l : r);
        if(s+a < l){
            printf("%d",2*(s+a));
        }else if(s+a > l){
            printf("%d",2*l);
        }
    }

    if(a==0 && (l!=0 && r != 0)){
        printf("%d", 2*(l<r ? l : r));
    }

    

}