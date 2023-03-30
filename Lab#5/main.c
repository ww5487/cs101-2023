#include <stdio.h>
#include <stdlib.h>

typedef int(*calc_ptr)(int x, int y);

int add(int x, int y){
	return x+y;
}
int sub(int x, int y){
	return x-y;
} 
int mul(int x, int y){
	return x*y;
}
int div_(int x, int y){
	return x/y;
}

int calc(calc_ptr func_ptr, int x, int y){
	return func_ptr(x, y);
}


int main(){
	printf("sum = %d\n", calc(add, 4, 2));
	printf("dif = %d\n", calc(sub, 4, 2 ));
	printf("product = %d\n", calc(mul, 4, 2 ));
	printf("quotient = %d\n", calc(div_, 4, 2));
	return 0;
} 
