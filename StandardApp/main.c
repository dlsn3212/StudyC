/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  ��ó�� ������
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - yujin
*/

#include <stdio.h>
#include <stdlib.h>
#include "student.h"

/*
int main(void) 
{
    int a = 10, b = 20;
    int x = 30, y = 40;
    int res;

    printf("a + b = %d\n", SUM(a, b));
    printf("x + y = %d\n", SUM(x, y));
    res = 30 / MUL(2, 5);
    printf("res : %d\n", res);
    

    return 0;
}


int main(void)
{
    int a1, a2;

    NAME_CAT(a, 1) = 10;
    NAME_CAT(a, 2) = 20;
    PRINT_EXPR(a1 + a2);
    PRINT_EXPR(a2 - a1);

    return 0;
}
*/

int main(void)
{
    int max;

#if VER >= 6
    printf("���� %d�Դϴ�.\n", VER);
#endif

#ifdef BIT16
    max = 32767;
#else
    max = 2147483547;
#endif

    printf("int�� ������ �ִ� : %d\n", max);

    return 0;
}