#include<stdio.h>

int sum(int *a, int *b) {
	return *a + *b ; 
} 


int main () {
	int a=2 , b=3;
	int tong ;
	tong = sum (&a, &b) ;
	printf("Tong cua %d va %d la : %d\n",a,b,tong) ; 
	
	
	return 0; 
} 
