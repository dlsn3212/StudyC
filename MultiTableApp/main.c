/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int i;
    int j;
    int sum = 0;
  /*  for (i = 2; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }
    */
    for ( i = 1; i <=100; i++)
    {
        if ((i % 3) == 0) {
            break;
        }
        sum += i;
    }
    printf("sum = %d\n", sum);
    

	system("pause");
	return EXIT_SUCCESS;
}