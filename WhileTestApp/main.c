/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int count = 0;
    while (1) {
        printf("Be HappY!\n");
        count++;
        if (count >= 10) {
            break;
        }
  }
	return EXIT_SUCCESS;
}