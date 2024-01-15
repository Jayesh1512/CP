#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    char a[n];
    scanf("%s",a);

    int ja = 0;
    int jb = 0;    
    int i=0;
    while(a[i] != '\0'){
        if(a[i] == 'S' && a[i+1] == 'F'){
            ja++;
        }else if(a[i] == 'F' && a[i+1] == 'S'){
            jb++;
        }
        i++;
    }    

    if(ja>jb){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}