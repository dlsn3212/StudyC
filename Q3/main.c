/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  학생 3명의 학급에서 각각 국어 영어 수학의 시험 성적을 입력 받은 후,  
  각 과목 총합과 평균을 출력하는 프로그램을 작성하시오.
  먼저 국어, 영어, 수학 성적을 멤버로 하는 구조체 student_t 를 정의한다.
  학생이 3명이므로 student_t 타입의 변수 3개, 혹은 배열을 정의하여, 해당 변수에 성적을 입력받는다.
  각 과목의 총합을 구하는 함수를 각각 작성하여 총합과 평균을 구한 후 이를 출력한다.

  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print(struct student_t* final);
struct student_t
{
    
    double lan;
    double eng;
    double math;
    
};


int main(void) 
{
    struct student_t student1[3];

   
    
        printf("국어 영어 수학순으로 성적을 입력해주세요 : ");
        scanf("%lf%lf%lf", &student1[0].lan, &student1[0].eng, &student1[0].math);
     
    
    printf("1번째 학생 성적 입력 끝\n");
    
        printf("국어 영어 수학순으로 성적을 입력해주세요 : ");
        scanf("%lf%lf%lf", &student1[1].lan, &student1[1].eng, &student1[1].math);
       
   
    printf("2번째 학생 성적 입력 끝\n");

    
        printf("국어 영어 수학순으로 성적을 입력해주세요 : ");
        scanf("%lf%lf%lf", &student1[2].lan, &student1[2].eng, &student1[2].math);
      
    
    printf("3번째 학생 성적 입력 끝\n\n\n");


    print(student1);
    

}

void print(struct student_t *final)//각과목의 총합과 평균
{
    int i;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
   float avg1, avg2, avg3;
    
    for (i = 0; i < 3; i++)
    {
        sum1 += final[i].lan;
        sum2 += final[i].eng;
        sum3 += final[i].math;

    }

    avg1 = sum1 / 3;
    avg2 = sum2 / 3;
    avg3 = sum3 / 3;

    printf("국어 총합 : %d%t평균 : %.1f\n", sum1, avg1);
    printf("영어 총합 : %d%t평균 : %.1f\n", sum2, avg2);
    printf("수학 총합 : %d%t평균 : %.1f\n\n", sum3, avg3);

 
}