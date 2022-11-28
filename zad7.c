#include <stdio.h>

int main(){
int a , b , c , d , d1;
    printf("a = " , a);
	scanf("%d" , &a);
	printf("b = " , b);
	scanf("%d" , &b);
	printf("c = " , c);
	scanf("%d" , &c);
	printf("d = " , d);
	scanf("%d" , &d);
	printf("d1 = " , d1);
	scanf("%d" , &d1);
	if (((a && b) || (c && d)) && d1 ){
	printf("Lamp is on!\n");
	} else {
	printf("Lamp is off!\n");
	}
	return 0;
	}