/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/
//#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int rank = 0, res = 0;
    scanf("%d", &rank);

    switch (rank)
    {
    case 1:
        res += 300;
        break;
    case 2:
        res += 200;
        break;
    case 3:
        res += 100;
        break;
    default:
        res = 10;
        break;
    }
    printf("res : %d \n", res);
	system("pause");
	return EXIT_SUCCESS;
}