#include<stdio.h>


void ABC(int arr[10], int k){
   int i = 0;
   int len = sizeof(arr) / sizeof(int);
   int max = arr[0];
   int temp;
   printf("check len %d \n", len);

   for(k=1; i<len; i++){
      if(max < arr[k]){
         temp = max;
         max = arr[k];
         arr[k] = temp;
      }
   }
}

int main(){

   /* Type or paste your code in this area */
   int i = 0;
   int arr[10];
   int k = 0;
   int num;

   for(i=0; i<10; i++){
      scanf("%d ", &num);
      arr[i] = num;
      k++;
   }

   for(i=0; i<10; i++){
      ABC(arr ,k);
   }
   
   
   for(i=0; i<10; i++){
      printf("%d ", arr[i]);
   }

   return 0;
}
