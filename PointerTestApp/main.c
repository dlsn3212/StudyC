/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - yujin            
*/

#include <stdio.h>
#include <stdlib.h>

/*
int main(void) 
{
    int a;
    double b;
    char c;

    printf("int형 변수의 주소 : %u\n", &a);
    printf("double형 변수의 주소 : %u\n", &b);
    printf("char형 변수의 주소 : %u\n", &c);

    return 0;

}
*/
/*
int main(void)
{
    int a;
    int* pa;

       pa = &a;
      *pa = 10;
      
    printf("포인터로 a값 출력 : %d\n", *pa);
    printf("변수명으로 a값 출력 : %d\n", a);        
    printf("pa의 주소 : %u\n", &pa);
    printf("pa의 값 : %d\n", pa);
    printf("a의 주소 : %u\n", &a);
    

//    scanf("%d", &a);
  //  printf("%d\n", a);

    scanf("%d", pa);
    printf("%d\n", a);
    return 0;
}
*/
/*
int main(void)
{
    int a = 10, b = 20, total;
    double avg;
    int* pa, * pb;
    int* pt = &total;
    double* pg = &avg;

    pa = &a;
    pb = &b;

    *pt = *pa + *pb;
    *pg = *pt / 2.0;

    printf("두 정수의 값 : %d, %d\n", *pa, *pb);
    printf("두 정수의 합 : %d\n", *pt);
    printf("두 정수의 평균 : %.1lf\n", *pg);

    return 0;
}
*/
/*
int main(void)
{
    int a = 10, b = 20;
    const int* pa = &a;

    printf("변수 a의 값 : %d\n", *pa);
    pa = &b;
    printf("변수 b의 값 : %d\n", *pa);
    pa = &a;
    a = 20;
    printf("변수 a의 값 : %d\n", *pa);
    return 0;
}
*/
/*
int main(void)
{
    char ch;
    int in;
    double db;

    char* pc = &ch;
    int *pi = &in;
    double *pd = &db;


    printf("ch size : %u\n", sizeof(ch));
    printf("in size : %u\n", sizeof(in));
    printf("db size : %u\n", sizeof(db));


    printf("ch size : %u\n", sizeof(pc));
    printf("in size : %u\n", sizeof(pi));
    printf("db size : %u\n", sizeof(pd));
}
*/

int main(void)
{
    int a = 10;
    int* p = &a;
    double* pd;

    pd = p;
    printf("%lf\n", *pd);

    return 0;
}