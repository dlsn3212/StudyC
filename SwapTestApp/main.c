/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  swap
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - yujin
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�

void swap(int *pa, int *pb);

int main(void) 
{
    int a = 10, b = 20;
    swap(&a, &b);
    printf("a : %d, b : %d\n", a, b);
}

void swap(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
    return;
}