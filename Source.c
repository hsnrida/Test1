#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {
	char hungry[20];
	printf("are you hungry?\n");
	scanf_s("%s", hungry, sizeof(hungry));
	if (strcmp(hungry,"yes")==0) {
		printf("eat sousa\n");
	}
	else
		printf("do your HW\n");
	getchar();
	system("pause");
}