/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  문자학습
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - yujin
*/

#include <stdio.h>
#include <stdlib.h>

// 문자열을 입력받아 대문자와 소문자로 바꾸는 함수
/*
int main(void) 
{
    char small, cap;

    
    scanf("%c", &cap);
    printf("문자열 입력 : %c\n", cap);
    if ((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A');

    }
    printf("대문자 : %c %c", cap ,'\n');
    printf("소문자 : %c", small);

    return 0;
}

scanf함수를 이용한 문자입력
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
    printf("입력한 문자 : ");
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

    printf("학번 입력 : ");
    scanf("%d", &num);
    getchar();
    printf("학점 입력 : ");
    grade = getchar();
    //scanf("%d", &grade);
    printf("학번 : %d, 학점 : %c", num, grade);

    return 0;
}