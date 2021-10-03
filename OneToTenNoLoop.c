#include<stdio.h>
int number(int val) {
   if(val<=100) {
      printf("%d\t",val);
      number(val+1);
   }
   if(val%10==0){
   printf("\n");
   }
   
}
int main() {
   int val = 1;
   number(val);
   return 0;
}
