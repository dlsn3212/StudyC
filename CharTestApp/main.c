/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  �����н�
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - yujin
*/

#include <stdio.h>
#include <stdlib.h>

// ���ڿ��� �Է¹޾� �빮�ڿ� �ҹ��ڷ� �ٲٴ� �Լ�
/*
int main(void) 
{
    char small, cap;

    
    scanf("%c", &cap);
    printf("���ڿ� �Է� : %c\n", cap);
    if ((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A');

    }
    printf("�빮�� : %c %c", cap ,'\n');
    printf("�ҹ��� : %c", small);

    return 0;
}

scanf�Լ��� �̿��� �����Է�
int main(void)
{
    char ch1, ch2;

    scanf("%c%c", &ch1, &ch2);
    printf("[%c%c]", ch1, ch2);

    return 0;
}


int main(void)
{
    int ch;

    ch = getchar();
    printf("�Է��� ���� : ");
    putchar(ch);
    putchar('\n');

    return 0;
}


int main(void)
{
    char ch;
    int i;

    for (i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }

    putchar('\n');

    return 0;
}


int main(void)
{
    int res;
    char ch;

    while (1)
    {
        res = scanf("%c", &ch);
        if (res == -1)break;
        printf("%d ", ch);
    }

    return 0;
}
*/

int main(void)
{
    int num, grade;

    printf("�й� �Է� : ");
    scanf("%d", &num);
    getchar();
    printf("���� �Է� : ");
    grade = getchar();
    //scanf("%d", &grade);
    printf("�й� : %d, ���� : %c", num, grade);

    return 0;
}