/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  ������뿵��
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
    printf("main �Լ� a : %d\n", a);

    return 0;
}

void assign(void)
{
    int a;

    a = 10;
    printf("assign �Լ� a : %d\n", a);
}
*/
/*
int main(void)
{
    int a = 10, b = 20;

    printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);
    {
        int temp;
        int a=0, b=0;

        temp = a;
        a = b;
        b = temp;
    }

    printf("��ȯ �� a�� b�� �� : %d. %d\n", a, b);
    return 0;
}
*/

void assign10(void);
void assign20(void);

int a;

int main(void)
{
    printf("�Լ� ȣ�� �� a �� : %d\n", a);

    assign10();
    assign20();

    printf("�Լ� ȣ�� �� a �� : %d\n", a);

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



