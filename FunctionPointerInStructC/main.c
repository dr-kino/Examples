#include <stdio.h>

typedef int (*operation)(int x, int y);

typedef struct {
	int result;
	operation oper;
}math_t;

// Addition function
int AdditionFunction(int x, int y) {
	return x + y;
}

// Subtraction function
SubtractionFunction(int x, int y) {
	return x - y;
}

int main (int argc, char** argv) {
	math_t mathObj;

	mathObj.oper = AdditionFunction;
	mathObj.result = mathObj.oper(5, 5);
	printf("Addition Operation Result: %d\n", mathObj.result);
	
	mathObj.oper = SubtractionFunction;
	mathObj.result = mathObj.oper(10, 3);
	printf("Subtraction Operation Result: %d\n", mathObj.result);
	
	return 0;
}
