#include <stdio.h>

int main(){
    int i = 2, j = 3;
	int *p = &i;

    printf("value of i = %d\n", *p);
	int *pj = &j;

    printf("value of j = %d\n", *pj);
	printf("address of i = %p\n", &i);
	printf("address of j = %p\n", &j);
    return 0;
}