#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b){
    return (a>b) ? a : b;
}

void calculate_the_maximum(int n, int k) {
  int a[n]; 
  int x,y;
  int a_bit=0, o_bit=0, x_bit=0;
  for(int i=0;i<n;i++){
      a[i]=i+1;
  }
  
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      x=a[i];
      y=a[j];

      if((x&y) < k){
        int temp1= x&y;
        a_bit= max(temp1,a_bit);
      }

      if((x|y) < k){
        int temp2= x|y;
        o_bit= max(temp2,o_bit);
      }

      if((x^y) < k){
        int temp3= x^y;
        x_bit= max(temp3,x_bit);
      }
    }
  } 
  printf("%d \n",a_bit);
  printf("%d \n",o_bit);
  printf("%d",x_bit);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
