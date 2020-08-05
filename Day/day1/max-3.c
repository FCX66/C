/*
    Name: 
    Author: fanchangxin
    Date: 2020-08-05 / 星期三 / 20:00:03
    Categories: 
    Description: 
*/

#include <stdio.h>
#include <stdlib.h>
int max(int x, int y, int z);               // Define the function of the maximum. 定义最大值函数。
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Max=%d\n", max(a, b, c));
    system("pause");
 
    system("pause");
    return 0;
}

int max(int x, int y, int z)
{
    return (x>y ? (x>z ? x : z) : (y>z ? y : z));  // Use conditional expressions. 利用条件表达式
}
