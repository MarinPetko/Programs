#include <stdio.h>

int main(){
int a , b , c ;
    printf("a = " , a);
	scanf("%d" , &a);
	printf("b = " , b);
	scanf("%d" , &b);
	printf("c = " , c);
	scanf("%d" , &c);
	if (a && b && c){
	printf("Lamp is on!\n");
	} else {
	printf("Lamp is off!\n");
	}
	return 0;
	}