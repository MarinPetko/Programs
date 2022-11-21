#include <stdio.h>

int main(){
int num1 = -20;
int num2 = 30;
printf("Number 1 = %d, Number 2 = %d\n", num1, num2);
int num3;
num3 = num1;
num1 = num2;
num2 = num3;
printf("Number 1 = %d, Number 2 = %d\n", num1, num2);
return 0;
}