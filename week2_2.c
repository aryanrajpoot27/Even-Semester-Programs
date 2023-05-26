#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main(){
   int n1,n2,prod,sum=0,temp,c=0,rem;
    scanf("%d",&n1);
    scanf("%d",&n2);
    while(n1>=10)
    {
        while(n2>=10)
        {
            prod= n1*n2;
            temp = prod;
            while(prod>0){
            rem = prod%10;
            sum = sum*10 + rem;
            prod = prod/10;
            }
            if(sum==temp){
                printf("%d",sum);
                c=1;
                break;
            }
        n2--;
            sum=0;
        }
  n1--;
    }
    if(c==0){
    printf("Not a valid state");
    }
    return 0;

}