/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  ����ü
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - yujin
*/

#include <stdio.h>
#include <stdlib.h>

enum season {SPRING, SUMMER, FALL,WINTER};

int main(void)
{
    enum season ss;
    char* pc = NULL;

    ss = SPRING;

    switch (ss)
    {
    case SPRING:
        pc = "inline"; break;

    case SUMMER:
        pc = "swimming"; break;
    case FALL:
        pc = "trip"; break;
    case WINTER:
        pc = "skiing"; break;
    }

    printf("���� ���� Ȱ�� = > %s\n", pc);
    return 0;
}