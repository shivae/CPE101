#include <stdio.h>

int fibonacci(int x){
	if(x == 1 || x == 0){return x;} 
	return(fibonacci(x - 1) + fibonacci(x - 2));
}

int main(){
	int x;

	x = fibonacci(2);
	printf("%d\n", x);
	
	return 0;
}