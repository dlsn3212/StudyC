/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  구조체를 반환하여 두 변수의 값 교환
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - yujin
*/

#include <stdio.h>
#include <stdlib.h>

struct vision
{
    double left;
    double right;
};

struct vision exchange(struct vision robot);

int main(void)
{
    struct vision robot;

    printf("시력 입력 : ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    robot = exchange(robot);
    printf("바뀐 시력 : %.1lf  %.1lf\n", robot.left, robot.right);

    return 0;
}

struct vision exchange(struct vision robot)
{

    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}