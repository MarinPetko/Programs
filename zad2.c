#include <stdio.h>
#include <stdint.h>
#include <windows.h>
int main () {
	int L1,L2,H,S;
	printf("L1 = " , L1);
	scanf("%d" , &L1);
	printf("L2 = " , L2);
	scanf("%d" , &L2);
	printf("H = " , H);
	scanf("%d" , &H);
	S = ((L1 + L2) * H )/2;
	printf("Lice = %d\n" , S);
	
return 0;
}