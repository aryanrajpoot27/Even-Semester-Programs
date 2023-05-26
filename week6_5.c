#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int size;
    scanf("%d",&size);
    int arr[size*2];
    int ans[100],index=0;
    for(int i=0;i<size*2 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size*2;i+=2)
    {
        for(int j=0;j<size*2;j+=2)
        {
            if(arr[i]<arr[j]  && arr[i+1]>arr[j+1])
            {
                ans[index]=arr[j];
                ans[index+1]=arr[j+1];
                index +=2;
                break;
            }
        }
    }
    for(int i=0;i<size*2;i+=2)
    {
        int we=0;
        for(int j=0;j<index;j+=2)
        {
            if(arr[i]==ans[j] && arr[i+1]==ans[j+1])we++;
        }
        if(we==0)printf("%d %d\n",arr[i],arr[i+1]);
    }  
    return 0;
}
