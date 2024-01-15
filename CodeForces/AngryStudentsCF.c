#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);

        int count =0;
        int ans = 0;

        for(int i=n-1 ; i>=0 ; i--){
            if(s[i] == 'P'){
                count+=1;
            }else{
                ans = (ans>count ? ans : count);
                count = 0;
            }
        }
        printf("%d \n",ans);
    }
    
}