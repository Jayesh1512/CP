#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    
    scanf("%s",s);

    int hf=0,ef=0,lf=0,of=0,lcnt=0;
    for(int i=0;i<strlen(s);i++) {
        if(s[i]=='h') {
            hf=1;
        }
        if(hf && s[i]=='e') {
            ef=1;
        }
        if(ef && s[i]=='l') {
            lf=1;
            lcnt++;
        }
        if(lf && lcnt>=2 && s[i]=='o') {
            of=1;
        }
    }
    printf("%s\n", of?"YES":"NO");
    return 0;
}
