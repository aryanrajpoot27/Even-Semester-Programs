#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
  int a[10][10], transpose[10][10],i,j;

  for ( i = 0; i < 3; i++){
  for ( j = 0; j < 3; j++) {
    scanf("%d", &a[i][j]);
  }
  }
  
  for ( i = 0; i < 3; i++){
  for ( j = 0; j < 3; j++) {
    transpose[j][i] = a[i][j];
  }
}
  for ( i = 0; i < 3; i++){
  for ( j = 0; j < 3; j++) {
    printf("%d ", transpose[i][j]);
  }
  }
    return 0;
}
