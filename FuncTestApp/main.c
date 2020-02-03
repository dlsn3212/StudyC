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

//int sum(int x, int y);
//int get_num();
//void get_num();

/*int main(void) 
{
    int a = 10, b = 20;
    int result;

    result = sum(a, b);
    printf("result : %d\n", result);

    get_num();
    

    return 0;
}

//합계함수
int sum(int x, int y)
{
    int temp;
    temp = x + y;

    return temp;
}

int get_num(void) {
    return 10;
}
*/

/*void print_char(char ch, int count);

int main(void) {
    print_char('@', 5);
    printf("\n");
}


void print_char(char ch, int count) {
    for (int i = 0; i < count; i++) {
        printf("%c", ch);
    }
    return;
}
*/

//재귀함수
/*void fruit(int count);

void fruit(int count)
{
    printf("apple\n");
    if (count == 3)return;
    fruit(count + 1);
    printf("jam\n");
}

int main(void)
{
    fruit(1);
    return 0;
}
*/


int factorial(int count);

int main(void)
{
    int result = factorial(3);
    printf("result : %d", result);
    
}

int factorial(int count)
{
    if (count == 1) {
        return 1;
    }

    return count * factorial(count - 1);

}