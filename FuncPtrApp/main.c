/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  �Լ�������
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - yujin
*/

#include <stdio.h>



// �����Լ�
/*
int sum(int, int);
int main(void)
{
    int (*fp)(int, int);
    int res;

    fp = sum;
    res = fp(10, 20);
        printf("result : %d\n", res);

    return 0;
}

int sum(int a, int b)
{
    return (a + b);
}



void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(void)
{
    int sel;

    printf("01 �� ������ ��\n");
    printf("02 �� ������ ��\n");
    printf("03 �� ���� �߿��� ū �� ��� \n");
    printf("���ϴ� ������ �����ϼ��� : ");
    scanf("%d",&sel);

    switch(sel)
    {
    case 1:func(sum); break;
    case 2:func(mul); break;
    case 3:func(max); break;
    }

    return 0;
}

void func(int (*fp)(int, int))
{
    int a, b;
    int res;

    printf("�� ������ ���� �Է��ϼ��� : ");
    scanf("%d%d",&a,&b);
    res = fp(a, b);
    printf("�ᱣ���� : %d\n", res);
}

int sum(int a, int b)
{
    return (a + b);
}

int mul(int a, int b)
{
    return (a * b);
}

int max(int a, int b)
{
    if (a > b) return a;
    else return b;
}
*/


int main(void)
{
    int a = 10;
    double b = 3.5;
    void* vp;

    vp = &a;
    printf("a : %d\n", *(int*)vp);

    vp = &b;
    printf("b : %.1lf\n", *(double*)vp);

    return 0;
}