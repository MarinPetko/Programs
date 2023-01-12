#include <stdio.h>

int main () {
	int numbers[] = { 10, 20, 5, 6, 78, 101 };
	int n = 6;
	int sum = 0;
	int proizvedenie = 1;
	for (int i = 0; i < n; i++){
		sum = sum + numbers[i];
		proizvedenie = proizvedenie * numbers[i];
	}
		printf("Sumata = %d\n", sum);
	    printf("Proizvedenieto = %d\n", proizvedenie);
	double sredno =(double) sum / n;
	     printf("Sredna stoinost = %.2f\n", sredno);
		return 0;
		}