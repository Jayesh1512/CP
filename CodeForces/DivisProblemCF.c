#include<stdio.h>
#include<math.h>
#include<stdlib.h> 

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);     
        

        if(a%b == 0){
            printf("0 ");
        }else{
            printf("%d \n",b - (a%b));
        }
    }
    return 0;
}