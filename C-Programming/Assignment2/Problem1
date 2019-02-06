#include<stdio.h>
#include "stdafx.h"

void binary_to_decimal()
{
	int binary,decimal = 0,i=1;
	printf("Enter binary number: \n");
	scanf_s("%d", &binary);
	while (binary)
	{
		decimal = decimal + (binary % 10)*(i);
		i = i * 2;
		binary /= 10;
	}
	printf("decimal number = %d",decimal);
	getchar();
}
int main()
{
	binary_to_decimal();
	getchar();
	return 0;
}
