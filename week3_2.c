#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    int N,i,sum=1,count=2;
    scanf("%d\n",&N);

    for(i=2; i<=N; i++){
        sum= sum + count;
        count++;
    }
    printf("%d",sum);
    return 0;
}