/*
    Name: combine
    Author: fanchangxin
    Date: 2020-08-05 / ������ / 05:55:03
    Categories: 
    Description: ��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
    1.��������������ڰ�λ��ʮλ����λ�����ֶ���1��2��3��4��������е����к���ȥ�����������������С�
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, j, k, count = 0;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            for (int k = 1; k < 5; k++)
            {
                if (i != j && i != k && j != k)
                {
                    printf("%d%d%d\n", i, j, k);
                    count++;
                }
            }
        }
    }
    printf("\n");
    printf("�ܹ���%d��\n", count);

    system("pause");
    return 0;
}