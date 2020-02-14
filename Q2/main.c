/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  점수를 학점으로 변환하는 함수를 작성하시오.
함수 입력 : 0-100 사이의 점수 (정수)
함수 반환값 : 학점
A : 90-100
B : 70-89
C : 60-69
D : 50-59
F : 0-39

  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

void grade(int *num);

// 메인함수
int main(void) 
{
    int num;
    printf("점수 : ");
    scanf("%d", &num);
    grade(&num);

    
}

void grade(int *num)
{
    int i;
    i = *num;
    if ((90 <= i) && (i<= 100))
    {
        printf("학점은 A");
        
    }
    else if ((70 <= i) && (i < 90))
    {
        printf("학점은 B");
    }
    else if ((60 <= i)&&(i < 70))
    {
        printf("학점은 C");
    }
    else if ((50 <= i) && (i < 60))
    {
        printf("학점은 D");
    }
    else if ((0 <= i)&&(i < 40))
    {
        printf("학점은 F");
    }
    return 0;
}