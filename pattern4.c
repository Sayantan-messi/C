# C
#include <stdio.h>

int main(){
    int i,j;
    for(i=1;i<=6;i++){
        for(j=0;j<=i-1;j++){
            printf("%c",'A'+(i-1));
        }
        printf("\n");
    }
    return 0;
}
