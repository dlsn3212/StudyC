/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�(���ù� �۾�)
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - yujin
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int a = 20;
    int b = 10;
    int c = 0;

    if (a > 10) {
        if (b >= 0)
        {
            c = 1;
        }
        else
        {
            c = -1;
        }
    }
    else {
        c = 0;
    }

    printf("c : %d\n", c);
	system("pause");
	return EXIT_SUCCESS;
}