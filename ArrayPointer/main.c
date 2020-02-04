/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  배열과 포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - yujin
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
/*
int main(void) 
{
    int ary[3];
    int i;

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    printf("세 번째 배열 요소에 키보드 입력 : ");
    scanf("%d", ary + 2);

    for (i = 0; i < 3; i++)
    {
        printf("%5d", *(ary + i));
    }
    return 0;
}
*/
/*
int main(void)
{
    int ary[3];
    int* pa = ary;
    int i;

    *pa = 10;


    *(pa + 1) = 20;
    pa[2] = pa[0] + pa[1];

    for (i = 0; i < 3; i++)
    {
        printf("%5d", pa[i]);
    }

    return 0;
}
*/
/*
int main(void)
{
    int ary[3] = { 10,20,30 };
    int* pa = ary;
    int i;

    printf("배열의 값: ");
    for (i = 0; i < 3; i++)
    {
        printf("%5d", *pa);
        pa++;
    }
    return 0;
}
*/
/*
void print_ary(int* a);
int main(void)
{
    int ary[5] = { 10,20,30,40,50 };

    print_ary(ary);

    return 0;
}

void print_ary(int* pa)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%5d", pa[i]);
    }
}
*/
void print_ary(int* pa, int size);
int main(void)
{
    int ary1[5] = { 10,20,30,40,50 };
    int ary2[7] = { 10,20,30,40,50,60,70 };
    int size = 0;
    size = sizeof(ary1) / sizeof(ary1[0]);
    printf("%d\n", size);

    print_ary(ary1, 5);
    printf("\n");
    print_ary(ary2, 7);

    return 0;
}



void print_ary(int* pa, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d", pa[i]);
    }
}