/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 헤더파일의 필요성과 중복 문제 해결 방법
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - yujin
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "point.h"
#include "line.h"

// 메인함수
int main(void) 
{
    Line a = { {1,2},{5,6} };
    Point b;

    b.x = (a.first.x + a.second.x) / 2;
    b.y = (a.first.y + a.second.y) / 2;
    printf("선의 가운데 점 좌표 : (%d, %d)\n", b.x, b.y);

    return 0;
}