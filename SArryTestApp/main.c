/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  고차원배열
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - yujin
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
/*
int main(void) 
{
    int score[3][4];
    int total;
    double avg;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("4과목의 점수 입력 : ");
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        total = 0;
        for (j = 0; j < 4; j++)
        {
            total += score[i][j];
        }

        avg = total / 4.0;
        printf("총점 : %d, 평균 : %.2lf\n", total, avg);
    }
    return 0;
}


int main(void)
{
    int num[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", num[i][j]);

        }
        printf("\n");
    }
    return 0;
}
*/

int main(void)
{
    char animal[5][20];
    int i;
    int count;

    count = sizeof(animal) / sizeof(animal[0]);
    for (i = 0; i < count; i++)
    {
        scanf("%s", animal[i]);
    }

    for (i = 0; i < count; i++)
    {
        printf("%s ", animal[i]);
    }
    return 0;
}