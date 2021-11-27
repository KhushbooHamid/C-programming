#include<stdio.h>
int evenodd (int a)
{
  int even, odd;
  if(a%2==0)
  printf("even");
  else
  printf("odd");
}
int main(){
    int a,check;
    printf("input any number");
    scanf("%d", &a);
    check = evenodd (a);
    return 0;
}