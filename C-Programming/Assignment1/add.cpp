#include<stdio.h>
#include "stdafx.h"

extern int res;

int add(int x, int y)
{
	res = x + y;
	return res;
}
