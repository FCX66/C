/*
        Name: 
        Author: fanchangxin
        Date: 2020-08-05 / 星期三 / 12:56:07
        Categories: 
        Description: 编写一个程序，输入a、b、c三个值，输出其中最大值。
        利用选择结构设计
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c, max;
    printf("输入3个数\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            max = a;
        else
            max = c;
    }
    else
    {
        if (b > c)
            max = b;
        else
            max = c;
    }
    printf("Max=%d\n", max);

    system("pause");
    return 0;
}
