/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 선택정렬 알고리즘
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - yujin.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void)
{
    int a[5] = { 3, 2, 1, 6, 5 };
    int i, j, temp;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }


    for (i = 0; i < 5; i++)
    {
        printf("%5d", a[i]);
    }

    return 0;
}