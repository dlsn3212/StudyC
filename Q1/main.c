/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  1부터 300사이의 숫자(정수) 중에서 3의 공배수(3,6,9,12,..)들의 총합을 출력하는 프로그램을 작성하시오. (for문 사용)

  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer -yujin
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int tot=0;
    int num=300;

    for (int i = 1; i < num+1; i++)
    {
        if (i % 3 == 0)
        {
            tot += i;
            
           
        }
        
        
    }
    printf("3의 공배수의 총합은 %d입니다", tot);
    return 0;
}