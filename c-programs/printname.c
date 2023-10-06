#include <stdio.h>

int main()
{
	char name[30];

	printf("Enter name:" );
	fgets(name, 30, stdin);
	printf("your name is %s\n", name);
	return 0;
}
