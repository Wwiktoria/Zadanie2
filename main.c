#include <stdio.h>
int main(void){
  int a, b;
  printf("Wprowadź bok a:");
  scanf("%d", &a);
  printf("Wprowadź bok b:");
  scanf("%d", &b);
  if ((a<0)||(b<0)){
    printf("Niepoprawne dane!\n");}
  else{
    double p;
    p=a*b;
    printf("Pole prostokąta wynosi %lf\n", p);
      }
  return 0;
  }