/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  ������
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

    printf("int�� ������ �ּ� : %u\n", &a);
    printf("double�� ������ �ּ� : %u\n", &b);
    printf("char�� ������ �ּ� : %u\n", &c);

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
      
    printf("�����ͷ� a�� ��� : %d\n", *pa);
    printf("���������� a�� ��� : %d\n", a);        
    printf("pa�� �ּ� : %u\n", &pa);
    printf("pa�� �� : %d\n", pa);
    printf("a�� �ּ� : %u\n", &a);
    

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

    printf("�� ������ �� : %d, %d\n", *pa, *pb);
    printf("�� ������ �� : %d\n", *pt);
    printf("�� ������ ��� : %.1lf\n", *pg);

    return 0;
}
*/
/*
int main(void)
{
    int a = 10, b = 20;
    const int* pa = &a;

    printf("���� a�� �� : %d\n", *pa);
    pa = &b;
    printf("���� b�� �� : %d\n", *pa);
    pa = &a;
    a = 20;
    printf("���� a�� �� : %d\n", *pa);
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