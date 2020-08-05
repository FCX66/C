/*
    Name: 三个数最大值
    Author: fanchangxin
    Date: 2020-08-05 / 星期三 / 19:47:50
    Categories: 
    Description: 
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b ? (a > c ? a : c) : (b > c ? b : c));
    printf("Max=%d\n", max);
    
    system("pause");
    return 0;
}
