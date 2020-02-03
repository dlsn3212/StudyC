/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

/*
int main(void) 
{
    int ary[5];

    ary[0] = 10;
    ary[1] = 20;
    ary[2] = ary[0] + ary[1];
    scanf("%d", &ary[3]);

    for (int i = 0; i <5; i++)
    {
        printf("ary[%d] = %d\n", i, ary[i]);
    }
	return EXIT_SUCCESS;
}
*/

int main(void)
{
    int score[5];
    int i;
    int total = 0;
    double avg;
    for (i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
    }
    for (i = 0; i < 5; i++) {
        total += score[i];
    }
    avg = total / 5.0;
    for (i = 0; i < 5; i++) {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("평균 : %.1lf\n", avg);

    return 0;
}