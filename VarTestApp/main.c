/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  변수사용영역
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - yujin
*/

#include <stdio.h>
#include <stdlib.h>

/*
void assign(void);

int main(void) 
{
    auto int a = 0;

    assign();
    printf("main 함수 a : %d\n", a);

    return 0;
}

void assign(void)
{
    int a;

    a = 10;
    printf("assign 함수 a : %d\n", a);
}
*/
/*
int main(void)
{
    int a = 10, b = 20;

    printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
    {
        int temp;
        int a=0, b=0;

        temp = a;
        a = b;
        b = temp;
    }

    printf("교환 후 a와 b의 값 : %d. %d\n", a, b);
    return 0;
}
*/

void assign10(void);
void assign20(void);

int a;

int main(void)
{
    printf("함수 호출 전 a 값 : %d\n", a);

    assign10();
    assign20();

    printf("함수 호출 후 a 값 : %d\n", a);

    return 0;
}

void assign10(void)
{
    a = 10;
}

void assign20(void)
{
    int a;
    a = 20;
}



