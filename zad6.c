#include <stdio.h>

int main(){
int a , b , c , d ;
    printf("a = " , a);
	scanf("%d" , &a);
	printf("b = " , b);
	scanf("%d" , &b);
	printf("c = " , c);
	scanf("%d" , &c);
	printf("d = " , d);
	scanf("%d" , &d);
	if ((a && b) || (c && d)){
	printf("Lamp is on!\n");
	} else {
	printf("Lamp is off!\n");
	}
	return 0;
	}