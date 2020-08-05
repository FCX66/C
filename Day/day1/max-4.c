/*
    Name: 
    Author: fanchangxin
    Date: 2020-08-05 / 星期三 / 20:01:57
    Categories: 
    Description: 
*/

#include <stdio.h>
#include <stdlib.h>
void max(int *p, int *q, int *r);          // Define the function of the maximum. 定义最大值函数。
int main()
{
	int a, b, c, *x, *y, *z; 
	x=&a, y=&b, z=&c;
	printf("Please enter number a b c: ");
	scanf("%d %d %d", x, y, z);
	max(x, y, z);          // Call the function of the maximum. 调用最大值函数。
system("pause");
    return 0;
}

void max(int *p, int *q, int *r)
{
	int m;
	m=*p>*q ? (*p>*r ? *p : *r) : (*q>*r ? *q : *r);
	printf("Max=%d\n", m);
}

    