#include <stdio.h>

int main(){
float Uin , Uf , I , R ;
    printf("Uin = ");
	scanf("%f" , &Uin);
	printf("Uf = ");
	scanf("%f" , &Uf);
	printf("I = ");
	scanf("%f" , &I );
	R  = ((Uin - Uf) / (I / 1e3));
	printf("R = %.31f Kohm\n" , R / 1e3);
	return 0;
	}