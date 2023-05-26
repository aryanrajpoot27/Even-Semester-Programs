#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void Rotate(int arr[], int d, int n)

{
    int temp[n];
    int k = 0;
    for (int i = d; i < n; i++) {

        temp[k] = arr[i];

        k++;

    }
    for (int i = 0; i < d; i++) {

        temp[k] = arr[i];

        k++;

    }

    for (int i = 0; i < n; i++) {

        arr[i] = temp[i];

    }

}

void PrintTheArray(int arr[], int n)

{

    for (int i = 0; i < n; i++) {

        printf("%d ",arr[i]);


    }

}
int main() {

       int N;

    scanf("%d",&N);
    int d;
    scanf("%d",&d);
    d+=1;

    int arr[N];

    for(int i=0 ;i<N;i++)

    {

        scanf("%d",&arr[i]);

    }    


    PrintTheArray(arr,N);
    printf("\n");

    

    Rotate(arr, d, N);

    PrintTheArray(arr, N);  
    return 0;
}