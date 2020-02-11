/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 extern static학습
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - yujin.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int input_data(void);
double average(void);
void print_data(double avg);

int count = 0;
static int total = 0;


int main(void) 
{
    double avg;

    total = input_data();
    avg = average();
    print_data(avg);

    return 0;
}

void print_data(double avg)
{
    printf(" 입력한 양수의 개수 : %d\n", count);
    printf(" 전체 합과 평균 : %d,%.1lf\n", total, avg);
}