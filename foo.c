#include <stdio.h>

int a= 1, b =1;

void foo(int *x, int *y){
 *x = 2;
 *y = 3;
}

int main(){

	foo(&a,&b);

        printf("a: %d b: %d\n", a, b);
}

