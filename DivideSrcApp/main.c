/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� ,����������
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - yujin
*/

#include <stdio.h>
#include <stdlib.h>
#include "sub.h"


int main(void) 
{
    int a, b;
    double avg;

    input_data(&a, &b);
    avg = average(a, b);
    printf("%d�� %d�� ��� : %.1lf\n", a, b, avg);

    return 0;
}