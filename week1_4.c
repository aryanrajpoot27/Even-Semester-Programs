#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T,n1,n2,sum;
    scanf("%d",&T);
    while(T>0){
        scanf("%d %d",&n1,&n2);
        sum = n1 + n2;
        printf("%d\n",sum);
        
        T--;
        sum=0;
    }
    return 0;
}