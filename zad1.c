#include <stdio.h>
#include <stdint.h>
#include <windows.h>
int main () {
	int L,H,P,S;
	printf("L = " , L);
    scanf("%d" , &L);
	printf("H = " , H);
	scanf("%d" , &H);
	P = 2*(L + H);
	printf("Perimetur = %d\n" , P);
	S = L * H;
	printf("Lice = %d\n" , S);
	
return 0;
}