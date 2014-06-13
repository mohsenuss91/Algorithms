// Redouane <unrealdz@gmail.com>
// Multiply two ints without using the * operator 

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	int x,y;
	printf("Type a number : ");
	scanf("%d", &x);
	printf("Type a second number : ");
	scanf("%d", &y);
	printf("%d * %d = %d", x,y, multiply(x,y));
	
}


int multiply(int a, int b) {
	int i;
	int res = 0;

	for (i=1;i<=b;i++) {
		res = res + a;
	}

	return res;
}


int sum(float a, float b) {
	res=a+b;
	return res;
}


int sub(float a, float b) {
	res=a-b;
	return res;
}

int div(float a, float b) {
	res=a/b;
	return res;
}
